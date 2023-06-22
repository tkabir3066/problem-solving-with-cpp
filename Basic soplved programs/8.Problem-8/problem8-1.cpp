#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{

    // Write a C++ Program to Generate Random Numbers between 0 and 100. Here’s simple C++ Program to Generate Random Numbers between 0 and 100 in C++ Programming Language.

    // Generate 10 random numbers in C++

    for (int i = 1; i <= 10; i++)
    {

        cout << rand() << endl;
        cout << endl;
    }

    return 0;
}

/*  If you re-run the above program, then it'll produce the same 10 random numbers as previously. So to solve this problem and generate random numbers without repetition, we've got another program for you. */