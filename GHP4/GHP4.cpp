/*
Assignment: GHP#4
Written by: Slava Borysyuk
Date: 11/08/2023
Language C++
Compiler: g++
Description:

*/

#include <iostream>
#include <fstream>
#include <list>

using namespace std;

int main(void)
{

    list<string> d_list;
    list<string> other_words;

    string filename;

    cout << "Enter a text file: ";
    cin >> filename;
    cout << "\n";

    ifstream file(filename);

    if (file.is_open())
    {
        string word;
        bool contains_d = false;

        while (file >> word)
        {
            for (char character : word)
            {
                if (character == 'D' || character == 'd')
                {
                    d_list.push_back(word);
                }
            }

            file.close();

            cout << "Words with the letter d or D: "
                 << "\n";
            for (const string &word : d_list)
            {
                cout << word << " ";
            }
            cout << "\n\n";

            cout << "Every other word: "
                 << "\n";
            for (const string &other_words : other_words)
            {
                cout << other_words << " ";
            }
        }

        return 0;
    }
}