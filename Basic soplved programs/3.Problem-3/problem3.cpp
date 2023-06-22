#include <iostream>

using namespace std;

int main()
{
    // Write a C++ Program to Find Quotient and Remainder of 2 numbers. Here’s simple C++ Program to Find Quotient and Remainder of 2 numbers in C++ Programming Language.

    int num1, num2;

    cout << "Enter two positive integer : ";
    cin >> num1 >> num2;

    int remainder = num1 % num2;
    int quotient = num1 / num2;

    cout << "Remainder = " << remainder << endl;
    cout << "Quotient = " << quotient;

    return 0;
}

/*
output:
Enter two positive integer : 50 5
Remainder = 0
Quotient = 10
 */