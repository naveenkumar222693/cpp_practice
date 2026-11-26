#include <bits/stdc++.h>
using namespace std;

// 1. Function
int add(int a, int b)
{
    return a + b;
}

// 2. Structure
struct Student
{
    string name;
    int age;
    float cgpa;
};

// 3. Class
class Calculator
{
public:
    int multiply(int a, int b)
    {
        return a * b;
    }
};

int main()
{
    // 1. Basic output
    cout << "Hello, World!" << endl;

    // 2. Variables and Data Types
    int age = 20;
    float marks = 85.5;
    double cgpa = 9.5;
    char grade = 'A';
    string name = "Naveen";
    bool passed = true;

    cout << "\nName: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Marks: " << marks << endl;
    cout << "CGPA: " << cgpa << endl;
    cout << "Grade: " << grade << endl;
    cout << "Passed: " << passed << endl;


    // 3. User Input
    int a, b;

    cout << "\nEnter two numbers: ";
    cin >> a >> b;

    cout << "Sum: " << a + b << endl;


    // 4. Operators
    cout << "\nAddition: " << a + b << endl;
    cout << "Subtraction: " << a - b << endl;
    cout << "Multiplication: " << a * b << endl;
    cout << "Division: " << a / b << endl;
    cout << "Remainder: " << a % b << endl;


    // 5. Conditional Statements
    if (a > b)
    {
        cout << "\na is greater";
    }
    else if (a < b)
    {
        cout << "\nb is greater";
    }
    else
    {
        cout << "\nBoth are equal";
    }


    // 6. Switch Statement
    int choice;

    cout << "\n\nEnter choice (1-3): ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "One";
            break;

        case 2:
            cout << "Two";
            break;

        case 3:
            cout << "Three";
            break;

        default:
            cout << "Invalid choice";
    }


    // 7. For Loop
    cout << "\n\nFor Loop: ";

    for (int i = 1; i <= 5; i++)
    {
        cout << i << " ";
    }


    // 8. While Loop
    cout << "\nWhile Loop: ";

    int i = 1;

    while (i <= 5)
    {
        cout << i << " ";
        i++;
    }


    // 9. Do-While Loop
    cout << "\nDo-While Loop: ";

    int j = 1;

    do
    {
        cout << j << " ";
        j++;
    }
    while (j <= 5);


    // 10. Arrays
    int arr[5] = {10, 20, 30, 40, 50};

    cout << "\n\nArray Elements: ";

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }


    // 11. Strings
    string str = "Programming";

    cout << "\n\nString: " << str << endl;
    cout << "Length: " << str.length() << endl;


    // 12. Functions
    cout << "\nFunction Addition: " << add(10, 20) << endl;


    // 13. Pointers
    int x = 100;

    int *ptr = &x;

    cout << "\nPointer Example" << endl;
    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value using pointer: " << *ptr << endl;


    // 14. Structures
    Student s1;

    s1.name = "Naveen";
    s1.age = 20;
    s1.cgpa = 9.5;

    cout << "\nStudent Details" << endl;
    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.cgpa << endl;


    // 15. Classes and Objects
    Calculator c;

    cout << "\nMultiplication: " << c.multiply(5, 4) << endl;


    return 0;
}