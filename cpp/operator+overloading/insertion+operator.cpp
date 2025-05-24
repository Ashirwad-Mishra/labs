#include <iostream>
using namespace std ;
class complex 
{
    public:
    int real;
    int img;

    public:
    int get_real() {return real;};
    int get_img () { return img ;};
    complex ( int r = 0 , int i=0) : real(r) , img(i)
    {}
    friend complex operator + (complex x, complex y);
    friend ostream& operator << (const ostream& output , const complex& c1);
    friend complex operator - (complex x , complex y);
};

ostream& operator<<(ostream& output, const complex& c1)
{
    output << c1.real << " + " << c1.img << "i";
    return output;
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
    cout << z;
    //a.display();
}