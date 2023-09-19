/*
Assignment: GHP#1
Written by: Slava Borysyuk
Date: 09/12/2023
Language: C++
Compiler: g++
Description: Integer division using two positive
integers (N and R), and finding a non negative
quotient (Q) and remainder (R). However, the variables
must be scoped (global variables).
*/

#include <iostream>

// Positive integers
int N = 0;
int D = 0;
// Quotient
int Q = 0;
// Remainder
int R = 0;

using namespace std;

//Integer Divison Prototype
void INTDIV();

int main(void)
{

    cout << "Please enter a positive integer: ";
    cin >> N;

    // If user doesn't enter a positive integer
    while (N <= 0)
    {
        cout << "You must enter a positive integer: ";
        cin >> N;
    }

    cout << "Please enter a second positive integer: ";
    cin >> D;

    // If user doesn't enter a second positive integer
    while (D <= 0)
    {
        cout << "You must enter a second positive integer: ";
        cin >> D;
    }

    // Integer Divison Call
    INTDIV();

    cout << "N = " << N << "\n";
    cout << "D = " << D << "\n";
    cout << "Quotient = " << Q << "\n";
    cout << "Remainder = " << R << "\n";

    return 0;
}
/*
INTDIV function
Written by: Slava Borysyuk
Date: 09/19/2023
Language: C++
Compiler: g++
Description: Integer division where it takes in both
the user inputs. Then checks if the first number is greater
than the second. If so then it goes into the while loop and
the first number gets subtracted by the second until the loop
fails. Then each run through the loop the quotient goes up by one.
Then the remainder is what the first number is at the end.
*/
void INTDIV()
{
    while (N >= D)
    {
        N = N - D;
        Q = Q + 1;
    }

    // Remainder
    R = N;

    return;
}