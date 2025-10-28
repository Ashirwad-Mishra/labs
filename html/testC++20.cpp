#include <iostream>
#include <vector>
#include <ranges>
#include <algorithm>
#include <concepts>
#include <compare>
#include <span>
#include <numeric>
#include <coroutine>
#include <string>
#include <array>

using namespace std;

// ======= Concepts =======
template<typename T>
concept Number = requires(T a, T b) {
    { a + b } -> convertible_to<T>;
};

// ======= Constexpr / constinit =======
constinit int global_counter = 0;
consteval int square(int x) { return x * x; }

// ======= Coroutine Generator =======
template<typename T>
struct Generator {
    struct promise_type;
    using handle_type = std::coroutine_handle<promise_type>;
    struct promise_type {
        T value_;
        std::suspend_always yield_value(T value) {
            value_ = value;
            return {};
        }
        std::suspend_always initial_suspend() { return {}; }
        std::suspend_always final_suspend() noexcept { return {}; }
        void return_void() {}
        void unhandled_exception() { std::exit(1); }
        Generator get_return_object() { return Generator{handle_type::from_promise(*this)}; }
    };
    handle_type h_;
    Generator(handle_type h): h_(h) {}
    ~Generator() { if (h_) h_.destroy(); }
    bool next() { 
        h_.resume(); 
        return !h_.done(); 
    }
    T getValue() { return h_.promise().value_; }
};

// ======= Main =======
int main() {
    cout << "=== C++20 Feature Test ===\n";

    // 1. Ranges: sort, filter, transform
    vector<int> v = {5, 2, 8, 1, 3, 6};
    auto view = v | ranges::views::filter([](int x){ return x % 2 == 0; })
                  | ranges::views::transform([](int x){ return x*x; });
    cout << "Ranges filtered+transformed even squares: ";
    for (auto x: view) cout << x << " ";
    cout << "\n";

    ranges::sort(v);
    cout << "Ranges sorted: ";
    for (auto x: v) cout << x << " ";
    cout << "\n";

    // 2. Concepts
    auto add = [](Number auto a, Number auto b){ return a + b; };
    cout << "Concepts add(3,5): " << add(3,5) << "\n";

    // 3. Three-way comparison
    int a = 5, b = 10;
    auto cmp = a <=> b;
    cout << "Three-way comparison 5 <=> 10: " 
         << (cmp < 0 ? "less" : (cmp == 0 ? "equal" : "greater")) << "\n";

    // 4. Constexpr / constinit
    cout << "Constexpr square(7): " << square(7) << "\n";
    global_counter += 1;
    cout << "Constinit global_counter: " << global_counter << "\n";

    // 5. Span
    array<int,5> arr = {10,20,30,40,50};
    span<int> s(arr);
    cout << "Span elements: ";
    for (int x: s) cout << x << " ";
    cout << "\n";

    // 6. Coroutines
    auto gen = []() -> Generator<int> {
        for (int i = 1; i <= 5; i++) co_yield i*i;
    };

    auto g = gen();
    cout << "Coroutine squares: ";
    while (g.next()) cout << g.getValue() << " ";
    cout << "\n";

    // 7. Other C++20 features: structured bindings
    pair<int,string> p = {42, "C++20"};
    auto [num, text] = p;
    cout << "Structured bindings: " << num << ", " << text << "\n";

    cout << "=== All tests done ===\n";
}