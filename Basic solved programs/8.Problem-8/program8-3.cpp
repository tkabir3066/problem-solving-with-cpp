#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{

    // Write a C++ Program to Generate Random Numbers between 0 and 100. Here’s simple C++ Program to Generate Random Numbers between 0 and 100 in C++ Programming Language.

    srand(time(0));

    for (int i = 1; i <= 10; i++)
    {

        // between 0 to 100
        cout << (rand() % 100) << endl;

        // between 1 to 100
        cout << (rand() % 100) + 1 << endl;
    }
    return 0;
}