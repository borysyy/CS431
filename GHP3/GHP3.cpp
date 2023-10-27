/*
Assignment: GHP#3
Written by: Slava Borysyuk
Date: 10/16/2023
Language C++
Compiler: g++
Description:



*/
#include <iostream>

using namespace std;

class Square
{
public:
    Square(const char *letterArray, int size)
    {
        if (size > 0)
        {
            letters = new char[size];
            for (int i = 1; i <= size; i++)
            {
                letters[i] = letterArray[i];
            }
        }
        letterCount = size;
    }

    void displayLettersSquare()
    {
        int length = letterCount * 2 - 1;
    
        for(int i = 0; i < (length / 2) + 1; i++)
        {
            

        }
    
       
    }
  

private:
    char *letters;
    int letterCount;
};


int main(void)
{

    int letter_amount = 0;

    cout << "How many letters are you going to use: ";
    cin >> letter_amount;

    char letters[letter_amount];

    for (int i = 1; i <= letter_amount; i++)
    {
        cout << "Letter " << i << ": ";
        cin >> letters[i];
    }

    Square mySquare(letters, letter_amount);
    mySquare.displayLettersSquare();

    return 0;
}