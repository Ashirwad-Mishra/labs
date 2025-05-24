#include<iostream>
#include<cstring>

class student
{
    private:
    int roll;
    char Name [50];
    int marks1,marks2, marks3;
    int sum;
    int average;
    char grade;

    public:
    //constructor
    student ();
    student (char N[50],int r , int m1, int m2, int m3);
    student (student &st);

    //mutators
    void set_name(const char N[50]);
    void set_roll(int r);
    void set_marks(int m1,int m2,int m3);
    

    //acessor
    char* get_name() const;//you cannot return an array directly in c++ instead you return the pointer of the first element in the array
    int get_roll() const;
    int get_sum() const;

    //facillitators
    int total(int m1,int m2, int m3) 
    {
        return m1+m2+m3;
    }
    int average(int m1,int m2,int m3)
    {
        return (total(m1,m2,m3))/3;
    }
    char grade();

    //destructor
    ~student();
}

student :: student()
{
    std :: cout << "Enter the name: ";
    std :: cin.getline ( Name, 50 ) ;
}
student :: student (char N[50],int r , int m1, int m2, int m3)
{
    set_name(N);
    set_roll(r);
    set_marks(m1,m2,m3);

}
student:: student (student &st)
{
    strcpy(Name, st.Name);
    roll = st.roll;
    marks1 = st.marks1;
    marks2 = st.marks2;
    marks3 = st.marks3;
}
void student :: set_name(const char N[50])
{
    strcpy(Name,N);
}
void student :: set_roll(int r)
{
    roll = r;
}
void student :: set_marks(int m1,int m2,int m3)
{
    marks1 = m1;
    marks2 = m2;
    marks3 = m3;

}
const char* student:: get_name() const 
{
    return Name;
}
int student :: get_sum() const 
{
    return marks1 + marks2 + marks3;
}
int student :: total() const 
{
    return marks1 + marks2 + marks3;
}
int student :: average(int m1,int m2,int m3) const
{
    return total(m1,m2,m3)/3;
}
int student :: get_roll() const 
{
    return roll;
}
char student :: grade ()
{
    int ave = average (marks1, marks2 , marks3);
    if ( ave >=90 ) grade = 'A';
    else if (ave >=80) grade = 'B';
    else if (ave >=70 ) grade = 'C';
    else grade = 'D';
    return grade;
}
student :: ~student()
{
    std :: cout << "\nThe student has been destryoyed.";
}


int main()
{
    student s1("Chandani",30,78,89,67);
    std :: cout << s1.grade();
}