#include<iostream>
int main()
{
    int A[] = {23,34,54,67,89,34,32};
    int *p = A; 
    std :: cout << *p << std :: endl << *p++ <<std :: endl <<*( p+2) ;

  
}