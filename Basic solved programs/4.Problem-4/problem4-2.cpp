#include <iostream>

using namespace std;

int main()
{

    // Write a C++ Program to Swap Two Numbers without using third variable. C++ Program to Swap Two Numbers without  third variable. Here’s simple Program to Swap Two Numbers without using temp variable in C++ Programming Language.

    // By * and /

    int a, b;

    cout << "Enter two positive integer : ";
    cin >> a >> b;

    cout << "Before swaping : " << endl;
    cout << "a =" << a << " b =" << b << endl;

    a = a * b;
    b = a / b;
    a = a / b;

    cout << "After swaping : " << endl;
    cout << "a =" << a << " b =" << b << endl;

    return 0;
}

/*
output:
Enter two positive integer : 10 5
Before swaping :
a =10 b =5
After swaping :
a =5 b =10
 */