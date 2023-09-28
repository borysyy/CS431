#include <iostream>

using namespace std;

int sum(int F(int x), int v);
int F1(int i);
int F2(int i);
int F3(int i);
int a[] = {0};

int main(void)
{

    int r = 0;

    cout << "Input an array size: ";
    cin >> r;

    for (int i = 1; i <= r; i++)
    {
        cout << "Input numbers into the array: ";
        cin >> a[i];
    }

    int firstsum = sum(F1, r);

    cout << "First sum: " << firstsum << "\n";

    int secondsum = sum(F2, r / 2);

    cout << "Second sum: " << secondsum << "\n";

    int thirdsum = sum(F3, r);

    cout << "Third sum: " << thirdsum << "\n";

    return 0;
}

int sum(int F(int x), int v)
{
    int s = 0;
    int i = 1;

    while (F(i) <= v)
    {
        s = s + a[(F(i))];
        i = i + 1;
    }

    return s;
}

int F1(int i)
{
    return i;
}

int F2(int i)
{
    return (2 * i - 1);
}

int F3(int i)
{
    return (i * (i + 1) / 2);
}