#include <iostream>

using namespace std;

int main()
{
    // Write a C++ Program to Find Sum and Average of three numbers. Here’s simple C++ Program to Find Sum and Average of three numbers in C++ Programming Language.

    float num1, num2, num3, sum, avg;

    cout << "Enter num1 : ";
    cin >> num1;
    cout << "Enter num2 : ";
    cin >> num2;
    cout << "Enter num3 : ";
    cin >> num3;

    sum = num1 + num2 + num3;
    avg = sum / 3;

    cout << "Sum = " << sum << endl;
    cout << "Average = " << avg;
    return 0;
}