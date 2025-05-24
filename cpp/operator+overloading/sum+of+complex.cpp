#include <iostream>
class complex 
{
    public: 
    int real;
    int img;
    public:
    complex (int r=0, int i = 0)
    {
        real = r;
        img = i;
    }
    complex operator + (complex x)
    
    {
    complex temp;
    temp.real = real + x.real;
    temp.img = img + x.img;
    return temp;

    }

};
int main()
{
    complex x(4,5), y(3,7),z;
    z = x + y;
    std :: cout << z.real <<" + "<<z.img<<"i";
}