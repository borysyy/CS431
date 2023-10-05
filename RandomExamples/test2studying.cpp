#include <iostream>

using namespace std;

void ADDIF(int r, int A[], int F(int x), int &X);
int f(int x);
int g(int x);

int main(void)
{

    int n = 0;
    int C[20];
    int D[20];
    int R = 0;
    int S = 0;

    cout << "Input array size: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << "Input numbers into array: ";
        cin >> C[i];
        D[i] = C[i];
    }

    ADDIF(n, D, f, S);
    ADDIF(n, D, g, R);

    cout << "S: " << S << " R: " << R;
    cout << "\n";

    return 0;
}

void ADDIF(int r, int A[], int F(int x), int &X)
{
    int SUM = 0;

    for (int i = 1; i <= r; i++)
    {
        if (F(A[i]) > 0)
        {
            SUM = SUM + F(A[i]);
        }
    }

    X = SUM;

    return;
}

int f(int x)
{
    int k = 0;
    k = (x * x) - 3;

    return k;
}

int g(int x)
{
    int m = 0;
    m = (x * 2) + 4;

    return m;
}