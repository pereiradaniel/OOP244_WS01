// I have done all the coding by myselfand only copied the code that my professor
// provided to complete my workshopsand assignments.
//
// Name:    Daniel Pereira
// Seneca email:
// Student ID:
// Date:  Wednesday, 26/May/2020

#include <iostream>
#include <iomanip>
#include "Word.h"
using namespace std;
using namespace sdds;

namespace sdds {
    int searchWords(const Word words[], int num, const char word[]) {
        int i;
        int foundIndex = -1;  // will be set to found index; if not found sould be less than 0
        for (i = 0; foundIndex == -1 && i < num; i++) { // while not found and i is less than number of words
            if (StrCmp(words[i].letters, word) == 0) { // if word is already read and found in the list of previous words
                foundIndex = i;   // set the index to be returned.
            }
        }
        return foundIndex;
    }

    void addWord(Word words[], int* index, const char newWord[]) {
        StrCpy(words[*index].letters, newWord);
        words[*index].count++;
        (*index)++;
    }

    void print(const Word * w, bool gotoNextLine, int len) { // uses iomanip header file
        cout << setw(len) << left << w->letters;
        cout << setw(3) << right << w->count;
        if (gotoNextLine) cout << endl;
    }
    int findMaxLen(const Word words[], int noOfWords) {
        int longest = 0;
        int i;
        for (i = 0; i < noOfWords; i++) {
            if (longest < StrLen(words[i].letters))
                longest = StrLen(words[i].letters);
        }
        return longest;
    }
    void listWords(const Word words[], int noOfWords, const char* theTitle) {
        int i;
        int maxLen = sdds::findMaxLen(words, noOfWords);
        title(theTitle, maxLen);
        for (i = 0; i < noOfWords; i++) {
            sdds::print(&words[i], true, maxLen);
        }
        endList();
    }
    void swap(Word * p1, Word * p2) {
        Word w;
        w = *p1;
        *p1 = *p2;
        *p2 = w;
    }
    void sort(Word words[], int cnt, int sortType) {
        int i, j;
        for (i = 0; i < cnt - 1; i++) {
            for (j = 0; j < cnt - i - 1; j++) {
                if (sortType == SORT_BY_OCCURANCE) {
                    if (words[j].count < words[j + 1].count) {
                        sdds::swap(&words[j], &words[j + 1]);
                    }
                }
                else if (sortType == SORT_ALPHABETICALLY) {
                    if (StrCmp(words[j].letters, words[j + 1].letters) > 0) {
                        sdds::swap(&words[j], &words[j + 1]);
                    }
                }
                else {

                }
            }
        }
    }
    int totalCount(const Word * words, int num) {
        int total = 0;
        do {
            total += words[--num].count;
        } while (num);
        return total;
    }
}