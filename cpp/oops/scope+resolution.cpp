#include<iostream>
class rectangle 
{
    private: 
    int length;
    int breadth;

    public: 
    //constructor 
    rectangle();
    rectangle(int l,int b);
    rectangle( rectangle &r );

    //mutators:-
    void set_l(int l);
    void set_b(int b);

    //acessors:-
    int get_l();
    int get_b();

    //facilitators:-
    int area();
    int perimetre();

    //enquary
    bool Is_square();

    //destructord
    ~rectangle();
};
rectangle :: rectangle()
{
    length = 0;
    breadth = 0;
}
rectangle :: rectangle (int l,int b)
{
    set_l(l);
    set_b(b);
}
rectangle :: rectangle ( rectangle &r)
{
    length = r.length;
    breadth = r.breadth;
}
void rectangle :: set_l (int l)
{
    if (l>0) length = l;
    else std :: cout << "The length cannot be negative."; 
}
void rectangle :: set_b (int b)
{
    if (b>0) breadth = b;
        else std :: cout << "The breadth cannot be negative." ;
}
int rectangle :: get_l()
{
    return length;
}
int rectangle :: get_b()
{
    return breadth;
}
int rectangle :: area()
{
    return length * breadth;
}
int rectangle :: perimetre()
{
    return 2 * ( length + breadth );
}
bool rectangle :: Is_square ()
{
    return length == breadth;
}
rectangle :: ~rectangle()
{
    std :: cout << "\nThe rectangle has been destroyed.";
}
int main()
{
    rectangle r1(10,20);
    int l,b;
    std :: cout << "The area of rectangle r1: " << r1.area();


    rectangle r2;
    std :: cout << "\n Enter length and breadth of r2: ";
    std :: cin >> l>> b;
    r2.set_l(l);
    r2.set_b(b);
    std :: cout << "\nThe area of 2nd rectangle: " << r2.area();

    rectangle r3 (r1) ;
    std :: cout << "\nThe area of rectangle 3: " << r3.area();


}