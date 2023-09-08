/*
Assignment: GHP#1
Written by: Slava Borysyuk
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

int main(void)
{

    cout << "Please enter a positive integer: ";
    cin >> N;

    // If user doesn't enter a positive integer
    while (N < 0)
    {
        cout << "You must enter a positive integer: ";
        cin >> N;
    }

    cout << "Please enter a second positive integer: ";
    cin >> D;

    // If user doesn't enter a second positive integer
    while (D < 0)
    {
        cout << "You must enter a second positive integer: ";
        cin >> D;
    }

    // Integer Divison
    while (N >= D)
    {
        N = N - D;
        Q = Q + 1;
    }

    // Remainder
    R = N;

    cout << "Quotient = " << Q << "\n";
    cout << "Remainder = " << R << "\n";

    return 0;
}