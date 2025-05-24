#include <iostream>
#include <string.h>

int main()
{
    char S[100],S2[100];
    std :: cout << "Enter the string: \n ";
    std :: cin.getline(S,100);
    std :: cout << S;
    std :: cout <<"The length of string s: "<< strlen(S);

    std :: cout << "\nEnter the another string: \n";
    std :: cin.getline(S2,100);
    std :: cout <<"The length of string s2: "<< strlen(S2);

    strcat (S , S2);
    std :: cout << S << std :: endl;
    std :: cout <<"The length of string s: "<< strlen(S);

    char *token = strtok(S,"., ");
    while (token != NULL)
    {
        std :: cout << token << std :: endl;
        token = strtok (NULL," ");
    }



}