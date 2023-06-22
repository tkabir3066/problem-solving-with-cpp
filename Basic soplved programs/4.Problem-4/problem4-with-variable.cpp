#include <iostream>

using namespace std;

int main()
{

    int a, b, temp;

    cout << "Enter two positive integer : ";
    cin >> a >> b;

    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;
    cout << "After swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}

/*
output:
Enter two positive integer : 10 5
Before swapping.
a = 10, b = 5
After swapping.
a = 5, b = 10
 */