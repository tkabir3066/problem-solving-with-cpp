#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    // Generate random numbers with no repetition in C++

    srand(time(0));

    for (int i = 1; i <= 10; i++)
    {
        cout << rand() << endl;
    }
    return 0;
}

/*
This is the program that generates random numbers without repetition. Here, we've used the srand() (seed random) function to set the initial point for generating random numbers using the time() function.

Note: The time() function is used to set the initial point for the srand() function. Here we've used the time() function because it is the thing that is continuously changing its value.

The function time() is defined in time.h header file. So don't forget to include this header file before executing the program given below. The rest of the program is identical to the previous one.

 */