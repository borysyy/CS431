/*
Assignment: GHP#1



Written by: Slava Borysyuk

*/

#include <iostream>

int N = 0;
int D = 0;
int Q = 0;
int R = 0;

using namespace std;

int main(void)
{

    cout << "Please enter a positive integer: ";
    cin >> N;
    while (N < 0)
    {
        cout << "You must enter a positive integer: ";
        cin >> N;
    }

    cout << "Please enter a second positive integer: ";
    cin >> D;
    while (D < 0)
    {
        cout << "You must enter a second positive integer: ";
        cin >> D;
    }

    while (N >= D)
    {
        N = N - D;
        Q = Q + 1;
    }

    R = N;

    cout << "Quotient = " << Q << "\n";
    cout << "Remainder = " << R << "\n";

    return 0;
}