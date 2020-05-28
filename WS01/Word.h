// I have done all the coding by myselfand only copied the code that my professor
// provided to complete my workshopsand assignments.
//
// Name:    Daniel Pereira
// Seneca email:
// Student ID:
// Date:  Wednesday, 26/May/2020

#ifndef _WORD_H_
#define _WORD_H_
#include "Utils.h"
// using namespace std;

namespace sdds {
 

    struct Word {
        char letters[MAX_WORD_LEN];
        int count;
    };

    int searchWords(const Word words[], int num, const char word[]);
    void addWord(Word words[], int* index, const char newWord[]);
    void print(const Word* w, bool gotoNextLine, int len);
    int findMaxLen(const Word words[], int noOfWords);
    void listWords(const Word words[], int noOfWords, const char* theTitle);
    void swap(Word* p1, Word* p2);
    void sort(Word words[], int cnt, int sortType);
    int totalCount(const Word* words, int num);
}
#endif