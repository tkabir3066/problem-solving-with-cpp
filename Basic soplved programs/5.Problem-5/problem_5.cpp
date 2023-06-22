#include <iostream>

using namespace std;

int main()
{

    /*  C++ Program to Find Size of Int Float Double and Char data types  */
    int num;
    float f;
    double d;
    char a;

    cout << "Size of  int = " << sizeof(num) << " bytes" << endl;
    cout << "Size of  float = " << sizeof(f) << " bytes" << endl;
    cout << "Size of  double = " << sizeof(d) << " bytes" << endl;
    cout << "Size of  char = " << sizeof(a) << " byte";
    return 0;
}

/*
Output:
Size of  int = 4 bytes
Size of  float = 4 bytes
Size of  double = 8 bytes
Size of  char = 1 byte
 */