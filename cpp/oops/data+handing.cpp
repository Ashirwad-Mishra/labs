#include<iostream>
class rectangle 
{
    private:
    int length;
    int breadth;
    public:
    void set_l(int l) // accessor
    {
        if (l>0) length = l;
        else std :: cout << "The length cannot be negative."; 

    }
    void set_b(int b)
    {
        if (b>0) breadth = b;
        else std :: cout << "The breadth cannot be negative." ;

    }
    int get_len()
    {
        return length;
    }
    int get_bth() //mutator
    {
        return breadth;
    }
    int area()
    {
        return length*breadth;
    }
    int peri ()
    {
        return 2*(length+breadth);
    }
};
int main()
{
    rectangle r;
    std :: cout << "Enter the length and breadth: ";
    int a , b;
    std :: cin >> a >> b;
    r.set_l(a);
    r.set_b(b);
    std :: cout << "\nThe area of the rectangle: " << r.area();
}