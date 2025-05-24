#include<iostream>
#include<string.h>
#include<string>
int main()
{
    char str[100];
    std :: cout << "Enter the string: \n";
    std :: cin.getline(str,100) ;
    std :: cout << str << std:: endl;

   int c=0;
    for (int i=0 ; str[i] != '\0' ; i++)
    {
        c+=1;
    } 
    
  
    std :: cout << "\n The length of the string: "<< c; 


}