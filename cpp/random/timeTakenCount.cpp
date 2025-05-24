#include <iostream>
#include <ctime>

int main()
{
    unsigned long long count;
    std::clock_t start = std::clock();
    for (count = 1; count <= 10000; count++)
    {}
    std::clock_t end = std::clock();
    double time_taken = double(end - start) / CLOCKS_PER_SEC;
    std::cout << "The time taken to count till %llu is<< time_taken << " seconds" << std::endl;
    return 0;
}