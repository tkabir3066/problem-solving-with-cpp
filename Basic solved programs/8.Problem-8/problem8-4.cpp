#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    // In C++, produce random numbers in the given range
    //  This is the last program that generates random numbers in a given range. The user must supply the range at runtime.

    // That is, this program asks the user to enter the interval first. For example, if the user enters the interval as 5  and 20, then the program further asks for the amount, say 10, to generate 10 random numbers between 5 and 20. Let's have a look at the program.

    int random_number, amount, initialNum, finalNum;

    cout << "Enter the initial interval : ";
    cin >> initialNum;
    cout << "Enter the final interval : ";
    cin >> finalNum;

    cout << "How many Random Numbers to Generate  : ";
    cin >> amount;

    cout << "List of random number between " << initialNum << " and " << finalNum << " : ";

    srand(time(0));
    for (int i = 1; i <= amount; i++)
    {
        random_number = rand() % (finalNum + 1 - initialNum) + initialNum;

        cout << endl;
        cout << random_number;
    }
    return 0;
}