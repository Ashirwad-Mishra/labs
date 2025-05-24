#include <iostream>
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x=5,y=10;
    swap (&x,&y);
    std :: cout << x << std :: endl << y;
}