#include<bits/stdc++.h>
using namespace std;
class base
{
public:
    void fun1()
    {
        cout<<"This is function 1" << endl;
    }
    void fun2()
    {
        cout<<"This is function 2" << endl;
    }
    void fun3()
    {
        cout<<"This is function 3" << endl;
    }
};

class derived : public base
{
public:
    
void fun4()
    {
        cout<<"This is function 4"<<endl;
    }
    void fun5()
    {
        cout<<"This is function 5"<<endl;
    }
};
int main()
{
    derived d;
    base *ptr = &d;
    ptr->fun1();
    ptr->fun2();
    ptr->fun3();
    ptr->fun4();
    ptr->fun5();
}