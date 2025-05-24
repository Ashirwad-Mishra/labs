#include <iostream>
#include <string>

class student
{
private:
    int roll;
    std::string Name;
    int marks1, marks2, marks3;
    mutable char grade; // mutable allows modification in const methods

public:
    // Constructors
    student();
    student(const std::string &N, int r, int m1, int m2, int m3);
    student(const student &st);

    // Mutators
    void set_name(const std::string &N);
    void set_roll(int r);
    void set_marks(int m1, int m2, int m3);

    // Accessors
    std::string get_name() const;
    int get_roll() const;
    int get_sum() const;
    char get_grade() const;

    // Facilitators
    int total() const;
    int average() const;

    // Destructor
    ~student();
};

// Default Constructor
student::student() : roll(0), marks1(0), marks2(0), marks3(0), grade('F')
{
    std::cout << "Enter the name: ";
    std::getline(std::cin, Name);
}

// Parameterized Constructor
student::student(const std::string &N, int r, int m1, int m2, int m3)
    : Name(N), roll(r), marks1(m1), marks2(m2), marks3(m3), grade('F')
{
}

// Copy Constructor
student::student(const student &st)
    : Name(st.Name), roll(st.roll), marks1(st.marks1), marks2(st.marks2), marks3(st.marks3), grade(st.grade)
{
}

// Mutators
void student::set_name(const std::string &N)
{
    Name = N;
}

void student::set_roll(int r)
{
    roll = r;
}

void student::set_marks(int m1, int m2, int m3)
{
    marks1 = m1;
    marks2 = m2;
    marks3 = m3;
}

// Accessors
std::string student::get_name() const
{
    return Name;
}

int student::get_roll() const
{
    return roll;
}

int student::get_sum() const
{
    return total(); // Using total() to calculate sum
}

char student::get_grade() const
{
    // Grade calculation is now a const method
    int ave = average();
    if (ave >= 90) return 'A';
    else if (ave >= 80) return 'B';
    else if (ave >= 70) return 'C';
    else return 'D';
}

// Facilitators
int student::total() const
{
    return marks1 + marks2 + marks3;
}

int student::average() const
{
    return total() / 3;
}

// Destructor
student::~student()
{
    std::cout << "\nThe student has been destroyed.";
}

// Main function
int main()
{
    student s1("Chandani", 30, 78, 89, 67);
    std::cout << "Grade: " << s1.get_grade() << std::endl;
    return 0;
}
