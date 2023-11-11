/*
    Assignment: GHP#4
    Written by: Slava Borysyuk
    Date: 11/10/2023
    Language C++
    Compiler: g++
    Description:
    A program that asks the user for a text file. Then it goes through each word
    and seperates the words into 2 lists. One for words that start with the letter 'D'/'d',
    and one for every other word. It then prints out the words in alphabetical order and
    the frequency in which the word appears in the text file.
*/

#include <iostream>
#include <fstream>
#include <list>
#include <algorithm>
#include <map>

using namespace std;

/*
   Assignment: GHP#3
   Written by: Slava Borysyuk
   Date: 11/10/2023
   Language C++
   Compiler: g++
   Main Function
   Description:
   Create two lists for the words and using a map to keep track of the
   word frequency. We open the file and then go through each word.
   In the loop we check to see if the word is already in the list using
   the find function. Then using the map we increase the frequncy of that word by one.
   After we close the file we use the sort function to get the words sorted in alphabetical
   order. Then after that we print out both lists.
   */

int main(void)
{

    // A list of type string for the d words
    list<string> d_words;
    // A list of type string for every other word
    list<string> other_words;
    // A map in which the type of key is a string, meaning the word,
    // and the mapped value is an int, meaning the frequency in which it appears.
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

        // Sorting both lists to be in alphabetical order
        d_words.sort();
        other_words.sort();

        cout
            << "Words with the letter d or D: "
            << "\n";
        for (const string &word : d_words)
        {
            cout << word << " (" << word_frequency[word] << ") ";
            cout << "\n";
        }

        cout << "\n\n";

        cout << "Every other word: "
             << "\n";
        for (const string &other_word : other_words)
        {
            cout << other_word << " (" << word_frequency[other_word] << ") ";
            cout << "\n";
        }

        return 0;
    }
}