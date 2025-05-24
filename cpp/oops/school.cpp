#include <bits/stdc++.h>
using namespace std;
class student
{
    private:
    string name;
    int roll;
    int Marks1;
    int Marks2;
    int Marks3;
    
    public:
    void set_name();
    void set_roll();
    void set_marks();
    string get_name();
    int get_roll();
    int get_marks();

};
void student :: set_name()
{
    cout << "Enter the name: \n";
    getline( cin , name);
}
void student :: set_roll()
{
    cout << "Enter the roll: \n";
    cin >> roll;
}
void student :: set_marks()
{
    cout << "Enter the Marks of 3 subjects: \n";
    cin >> Marks1 >> Marks2 >> Marks3;
}
string student:: get_name()
{
    return name;
}
    int student :: get_roll()
    {
        return roll;
    }
    int student :: get_marks()
    {
        return Marks1 + Marks2 + Marks3 ;
    }
int main()
{
    student s1 , s2 ,s3;
    s1.set_name();
    s1.set_roll();
    s1.set_marks();
    cout << s1.get_name()<<endl;
    cout << s1.get_roll()<< endl;
    cout << s1.get_marks() << endl;
}