#include<iostream>
int main()
{
    char A[100],B[100];
    int c =0,f=0;
    std :: cout << "\nEnter your array: \n";
    std :: cin.getline(A,100);
    for (int i = 0;A[i]!=0;i++)
    {
        c+=1;
    }
    int i , j; 
    for (i = 0, j=c-1 ; A[i]!='\0' ; i++ , j-- )
    {
        B[i]=A[j];
    }
    std :: cout << "\n"<< B; 
    for (int i = 0;A[i]!=0;i++)
    {
        if (A[i]!=B[i]) f+=1;
    }
    if (f==0) std :: cout << "\n Pallindrome";
    else std :: cout << "\n Non pallindrome";
}