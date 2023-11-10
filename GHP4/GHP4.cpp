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
#include <algorithm>
#include <map>

using namespace std;

int main(void)
{

    list<string> d_words;
    list<string> other_words;
    map<string, int> word_frequency;

    string filename;

    cout << "Enter a text file: ";
    cin >> filename;
    cout << "\n";

    ifstream file(filename);

    if (file.is_open())
    {
        string word;

        while (file >> word)
        {
            if (word[0] != 'D' && word[0] != 'd')
            {
                if (find(other_words.begin(), other_words.end(), word) == other_words.end())
                {
                    other_words.push_back(word);
                }
            }
            else
            {
                if (find(d_words.begin(), d_words.end(), word) == d_words.end())
                {
                    d_words.push_back(word);
                }
            }

            word_frequency[word]++;
        }

        file.close();

        d_words.sort();
        other_words.sort();

        cout
            << "Words with the letter d or D: "
            << "\n";
        for (const string &word : d_words)
        {
            cout << word << " (" << word_frequency[word] << ") ";
        }
        cout << "\n\n";

        cout << "Every other word: "
             << "\n";
        for (const string &other_words : other_words)
        {
            cout << other_words << " (" << word_frequency[word] << ") ";
        }

        return 0;
    }
}