#include <iostream>

int main()
{
    char A[1000];
    int v=0,c=0,w=1,l=0;
    std :: cout << "\n Enter the string: \n";
    std :: cin.getline(A,1000);
    std :: cout << std :: endl << A << std :: endl;
    for (int i = 0; A[i] != '\0' ; i++)
    {
        if (A[i] == 'A'|| A[i]=='E' || A[i]== 'O' || A[i] == 'U' || A[i]=='a'||A[i]=='o'||A[i]=='e'||A[i]=='i'||A[i]=='u')
        {
            v+=1;
        }
        else if (A[i]==' ')
        {
            w+=1;
        }
        else c+=1;
        l++;
    }
    std :: cout << "\n The no. of character = " << l<<"\n"<< "The no of vowells= " << v << std :: endl << "The no of consonenets = " << c;
    std :: cout << "\nThe no of words: "<<w; 

}