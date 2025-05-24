#include <bits/stdc++.h>
using namespace std;
struct Students
{
    private:
        char name[100];
        int roll;
        int marks[6];
    
    public:
        void push_name()
        {
            char s[100];
            cout << "Enter the name: ";
            cin.ignore();  // Clear the buffer to avoid getline issues
            cin.getline(s, sizeof(s));
            strcpy(name, s);
        }

        void set_roll(int n)
        {
            roll = n;
        }

        void push_marks(int A[6])
        {
            for (int i = 0; i < 6; i++)
            {
                marks[i] = A[i];
            }
        }

        void SortMarks()
        {
            sort(marks, marks + 6);
        }

        void display_name()
        {
            cout << "Name: " << name << endl;
        }

        int get_roll()
        {
            return roll;
        }

        void display_marks()
        {
            for (int i = 0; i < 6; i++)
            {
                cout << "Marks in subject " << i + 1 << ": " << marks[i] << endl;
            }
        }

        bool IsSelected()
        {
            int s = 0;
            SortMarks();
            for (int i = 2; i <= 5; i++)  // Consider the middle 4 marks (3rd, 4th, 5th and 6th)
            {
                s += marks[i];
            }
            if (s / 4 >= 95)  // Average based on the 4 selected marks
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

int main()
{
    Students s1;
    s1.push_name();

    int r;
    cout << "Enter the roll: ";
    cin >> r;
    s1.set_roll(r);

    int m[6];
    cout << "Enter the marks for 6 subjects: ";
    for (int i = 0; i < 6; i++)
    {
        cin >> m[i];
    }
    s1.push_marks(m);

    s1.display_name();
    cout << "Roll number: " << s1.get_roll() << endl;
    s1.display_marks();

    if (s1.IsSelected())
    {
        cout << "Congratulations! You are selected." << endl;
    }
    else
    {
        cout << "Not selected!" << endl;
    }

    return 0;
}