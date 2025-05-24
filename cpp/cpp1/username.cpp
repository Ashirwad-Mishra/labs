#include<iostream>
#include<string>

int main()
{
    string str = "ashirwadmishra101@outlook.com";
    int i = str.find('@');
    string uname = str.substr(0,i);
    std :: cout << "Username is " << uname ;
}