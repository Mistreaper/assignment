#ifndef STRINGS_H
#define STRINGS_H
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

/*
say we have input wpwkew, longest substring wke with length of 3.
STEPS:
- create temporary variable for count, and a count vector and a pointer
- Traverse the string from left to right, adding
- if a character was equal to any of the previos characters, repeat starting from index of this step and add the count based on the previous count.

TO CHECK THE EQUAL:
- if tempString[m] is equal to tempString[loop from start of string to just before string ends].  

AFTER LOOP ENDS (POINTER REACHES LAST DIGIT)
- get the max number of count vector

- 
*/
bool checkDoubleChars(string s) {
    int m = s.length() - 1;
    if (s.length() == 1) {
        return false;
    }
    for (int i = 0; i < s.length(); ++i) {
        if (s[m] == s[i]) {
            return true;
        } else if (s[m] != s[i] && i < s.length()) {
            return false;
        } 
    }

    return false;
}
int lengthOfLongestSubstring(string s) {
    //initialize pointer to keep track of where we are
    
    /*
   b
    abcabcbb
    int p1 = 0;
    int res = 0;
    string temp;

    p2 parse through every substring
    for (int p2 = 0, p2 < s.length(); i++) {
        if (temp.find(s[p2])) {
            temp.drop(temp[0])
            p1++;
        }
        temp.push_back(s[r])
        res = max(res, p2 - 1 + 1) 
    }
    */
    int p1 = 0;
    int res = 0;
    set<char> temp;
    for (int p2 = 0; p2 < s.length(); ++p2) {
        if (temp.count(s[p2]) >= 1) {
            temp.erase(temp.begin());
            p1++;
        }
        temp.insert(s[p2]); 
        res = max(res, p2 - p1 + 1);
    } 

    return res;
}

#endif