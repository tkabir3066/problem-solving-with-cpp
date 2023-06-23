#include <iostream>

using namespace std;

int main()
{

    // Write a C++ Program to convert inches to feet yards and inches. Here’s simple Program to convert inches to feet yards and inches in C++ Programming Language.

    float y, f, i;
    cout << "Enter Inches to Convert : ";
    cin >> i;

    y = i / 36;

    f = i / 12;

    cout << "After Conversion from inches to feet, yards and inches : " << endl;
    cout << "Yards = " << y << " Feet = " << f << "  Inches = " << i << " ";
    return 0;
}

/*
Output:
Enter Inches to Convert : 12
After Conversion from inches to feet, yards and inches :
Yards = 0.333333 Feet = 1  Inches = 12
 */