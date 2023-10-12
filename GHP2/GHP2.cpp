/*
Assignment: GHP#2
Written by: Slava Borysyuk
Date: 10/12/2023
Language C++
Compiler: g++
Description:
This program is doing a sort of an array, however,
the variables must be scoped so that they are global.
For example, the int variable j shouldn't be available to main, but
must be available to all the other functions. So we declare j underneath
main but above all the function definitions.
*/

#include <iostream>

using namespace std;

int n;
int a[100];

void sort();
void move();
void Findkay();

int main(void)
{

    cout << "Enter an array size: ";
    cin >> n;

    while(n <= 0)
    {
        cout << "Array size must be greater than zero: ";
        cin >> n;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << "Input a number into the array: ";
        cin >> a[i];
    }

    sort();

    cout << "\n";
    cout << "Sorted Array: " << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << a[i];
        cout << "\n";
    }
    
    return 0;
}

int j;

void sort()
{
    for (j = 1; j <= n - 1; j++)
    {
        if (a[j] > a[j + 1])
        {
            move();
        }
    }

    return;
}

int k;
int temp;

void move()
{
    temp = a[j + 1];
    a[j + 1] = a[j];

    Findkay();

    a[k] = temp;

    return;
}

void Findkay()
{

    k = j;
    int sw = 0;

    while ((k > 1) && (sw == 0))
    {
        if (a[k - 1] > temp)
        {
            a[k] = a[k - 1];
            k = k - 1;
        }
        else
        {
            sw = 1;
        }
    }

    return;
}