#include<iostream>

class complex {
private:
    int real;
    int img;

public:
    // Constructor
    complex();
    complex(int r, int i);
    complex(const complex &C);

    // Mutator
    void set_r(int r);
    void set_i(int i);

    // Accessor
    int get_r() const;
    int get_i() const;

    // Facilitator
    friend complex operator+(complex C1, complex C2);
    friend complex operator-(complex C1, complex C2);
    friend std::ostream& operator<<(std::ostream& output, const complex& C1);

    // Destructor 
    ~complex();
};

complex::complex() {
    std::cout << "Enter your complex number (real and imaginary parts): ";
    int x, y;
    std::cin >> x >> y;
    set_r(x);
    set_i(y);
}

complex::complex(int r, int i) {
    set_r(r);
    set_i(i);
}

complex::complex(const complex &C) {
    real = C.real;
    img = C.img;
}

void complex::set_r(int r) {
    real = r;
}

void complex::set_i(int i) {
    img = i;
}

int complex::get_r() const {
    return real;
}

int complex::get_i() const {
    return img;
}

complex operator+(complex C1, complex C2) {
    complex C;
    C.real = C1.real + C2.real;
    C.img = C1.img + C2.img;
    return C;
}

complex operator-(complex C1, complex C2) {
    complex C;
    C.real = C1.real - C2.real;
    C.img = C1.img - C2.img;
    return C;
}

std::ostream& operator<<(std::ostream& output, const complex& C1) {
    output << C1.real << " + " << C1.img << "i";
    return output;
}

complex::~complex() {
    std::cout << "The complex number has been destroyed." << std::endl;
}

int main() {
    complex c1(3, 4);
    complex c2(1, 2);
    complex c3 = c1 + c2;
    std::cout << "c1 + c2 = " << c3 << std::endl;
    complex c4 = c1 - c2;
    std::cout << "c1 - c2 = " << c4 << std::endl;
    return 0;
}

