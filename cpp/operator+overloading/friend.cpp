#include <iostream>
class complex 
{
    private:
    int real;
    int img;

    public:
    complex ( int r = 0 , int i=0) : real(r) , img(i)
    {}
    friend complex operator + (complex x, complex y);
    void display();
    friend complex operator - (complex x , complex y);
};
void complex :: display()
{
    std :: cout << real << " + "<< img << "i";
}
complex operator+ (complex x, complex y)
{
    complex t;
    t.img = x.img + y.img;
    t.real = x.real + y.real;
    return t;
}
complex operator- (complex x, complex y)
{
    complex t;
    t.img = x.img - y.img;
    t.real = x.real - y.real;
    return t;
}
int main()
{
    complex x(5,6), y(6,7), z,a;
    z = x + y;
    a = x - y;
    z.display();
    std :: cout << "\n";
    a.display();
}