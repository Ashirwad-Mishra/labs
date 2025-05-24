#include<iostream>
class rectangle 
{
    public:
    int l;
    int b;
    int area()
    {
        return l*b;
    }
    int peri ()
    {
        return 2*(l+b);
    }
};
int main()
{
    rectangle r1 , r2;
    rectangle *p1, *p2;
    p1 = &r1;
    p2 = &r2;
    std :: cout << "Enter the langhth and breadth of rectangle 1: ";
    std :: cin >> r1.l >> r1.b;
    std :: cout << "\nThe area of r1: " << r1.area();
    std :: cout << "\nThe perimetre of r2: "<<r1.peri();

    std :: cout << "\nEnter the langhth and breadth of rectangle 2: ";
    std :: cin >> r2.l >> r2.b;
    std :: cout << "\nThe area of r1: " << r2.area();
    std :: cout << "\nThe perimetre of r2: "<<r2.peri();

    /* std :: cout <<"\npointer\n";
    std :: cin >> r1.l >> r1.b;
    std :: cout << "\nThe area of r1: " << p1->area();
    std :: cout << "\nThe perimetre of r2: "<<p2->peri();
    */
}