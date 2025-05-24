#include <iostream>
using namespace std;

const int n = 10; 
int stack[n];    
int top = -1;    

void display() {
    if (top == -1) {
        cout << "\nStack is empty\n";
    } else {
        cout << "\nStack elements are: ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

void push() {
    if (top >= n - 1) {
        cout << "\nStack Overflow\n";
    } else {
        int x;
        cout << "Enter element to push: ";
        cin >> x;
        top = top + 1;
        stack[top] = x;
        cout << x << " pushed into stack\n";
    }
}

void pop() {
    if (top == -1) {
        cout << "\nStack Underflow\n";
    } else {
        cout << stack[top] << " popped from stack\n";
        top = top - 1;
    }
}

int main() {
    int choice;
    
    do {
        cout << "\nMenu:\n1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                cout << "Exiting\n";
                break;
            default:
                cout << "Invalid choice, try again.\n";
        }
    } while (choice != 4);

    return 0;
}
