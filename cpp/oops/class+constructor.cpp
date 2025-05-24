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
   /* rectangle ()
    {
        length = 0;
        breadth = 0;
    }*/
    rectangle (int l=0,int b=0)
    {
        set_l(l);
        set_b(b);
    }
    rectangle (rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }
};
int main()
{
    rectangle r(10,5);
    rectangle r2(r);
    std :: cout << "Area = " << r2.area();
}
