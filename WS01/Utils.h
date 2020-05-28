// I have done all the coding by myselfand only copied the code that my professor
// provided to complete my workshopsand assignments.
//
// Name:    Daniel Pereira
// Seneca email:
// Student ID:
// Date:  Wednesday, 26/May/2020

#ifndef _UTILS_H_
#define _UTILS_H_
// using namespace std;
namespace sdds {

    const int MAX_WORD_LEN = 21;
    const int MAX_NO_OF_WORDS = 500;
    const int SORT_BY_OCCURANCE = 1;
    const int SORT_ALPHABETICALLY = 0;

    char ToLower(char ch);
    int StrCmp(const char* s1, const char* s2);
    void StrCpy(char* des, const char* src);
    int StrLen(const char* str);
    bool isAlpha(char ch);
    void trim(char word[]);
    void toLowerCaseAndCopy(char des[], const char source[]);
    void title(const char* value, int len);
    void endList();
    void totalWordsStat(int totNoWrds, int totalOverAll, int longestWord);
    void wordStats();
    void programTitle();
}

#endif