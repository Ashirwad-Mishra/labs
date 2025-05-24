#include<iostream>
#include<string>

int main()
{
   std :: string str = "Hello Ashirwad! how are you doing?";
   std :: cout << str<<std :: endl;
  
   std :: cout << str.capacity() << std :: endl << str.size() << std :: endl << str.length() ;
   std :: cout << str.max_size();
   str.clear();
    std :: cout << str.capacity() << std :: endl << str.size() << std :: endl << str.length() ;
    std :: cout << std :: endl << str.empty() << std:: endl;
    std :: cout << str << std :: endl;

    str.append("Hi! chandani");
    str.append("\n How are you doing?");
    std :: cout << std :: endl << str << std :: endl;
    std :: cout << str.capacity() << std :: endl << str.size() << std :: endl << str.length() ;
    std :: cout << str.max_size();


}