/*
Assignment: GHP#3
Written by: Slava Borysyuk
Date: 10/27/2023
Language C++
Compiler: g++
Description:
A program that accepts characters from the user, and creates a concentric square
from those characters. The outer character being the last character the user submitted,
while the inner most is the first character the user submitted.
*/

#include <iostream>

using namespace std;

/*
Assignment: GHP#3
Written by: Slava Borysyuk
Date: 10/27/2023
Language C++
Compiler: g++
C++ class: Square
Description:
The purpose of this class is to fill an array and
display the concentric square.
*/

class Square
{
public:
    /*
   Assignment: GHP#3
   Written by: Slava Borysyuk
   Date: 10/27/2023
   Language C++
   Compiler: g++
   C++ class: Square constructor
   Description:
   The purpose of this constructor is to set the size and letters variables
   when an instance of the class is created.
   */

    Square(const char *letterArray, int size)
    {
        this->size = size;
        letters = new char[size];
        for (int i = 1; i <= size; i++)
        {
            letters[i] = letterArray[i];
        }
    }

    /*
    Assignment: GHP#3
    Written by: Slava Borysyuk
    Date: 10/27/2023
    Language C++
    Compiler: g++
    C++ function: displayLettersSquare
    Description:
    The purpose of this function is to display the letters in
    the square format and call the fillSquare function.
    */

    void displayLettersSquare()
    {
        int n = 2 * size - 1;
        char **result = new char *[n];
        for (int i = 0; i < n; i++)
        {
            result[i] = new char[n];
        }

        fillSquare(result, 0, n - 1, letters, size);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << result[i][j] << ' ';
            }
            cout << endl;
        }

        for (int i = 0; i < n; i++)
        {
            delete[] result[i];
        }
        delete[] result;
    }

    /*
    Assignment: GHP#3
    Written by: Slava Borysyuk
    Date: 10/27/2023
    Language C++
    Compiler: g++
    C++ function: fillSquare
    Description:
    The purpose of this function is to fill a
    2D array of the letters in order to produce
    the square shape and to have the letters
    go from the last character to slowly go towards the
    first character. This is a recursive function as it keeps
    calling itself until all the squares are completed.
    */

    void fillSquare(char **result, int start, int end, char *letters, int idx)
    {
        if (start > end)
            return;

        for (int i = start; i <= end; i++)
        {
            result[start][i] = letters[idx];
            result[i][start] = letters[idx];
            result[end][i] = letters[idx];
            result[i][end] = letters[idx];
        }

        fillSquare(result, start + 1, end - 1, letters, idx - 1);
    }

private:
    char *letters;
    int size;
};

/*
   Assignment: GHP#3
   Written by: Slava Borysyuk
   Date: 10/27/2023
   Language C++
   Compiler: g++
   Main Function
   Description:
   Asks the user for how many letters they're going to insert then it
   asks for the letters. After that it creates an instance of the Square class
   and then calls the displayLettersSquare method.
   */

int main()
{
    int k = 0;

    cout << "Enter the amount of letters: ";
    cin >> k;

    char characters[k + 1];

    for (int i = 1; i <= k; i++)
    {
        cout << "Letter " << i << ": ";
        cin >> characters[i];
    }

    Square mySquare(characters, k);
    mySquare.displayLettersSquare();

    return 0;
}
