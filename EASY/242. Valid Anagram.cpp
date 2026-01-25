#include <bits/stdc++.h>

class Solution {
public:
    bool isAnagram(string s, string t) {

       int alpha[26];

       if (s.length() != t.length()) return false;

       for (auto it: t){
            alpha[it - 'a'] ++;
       }

       for (auto it: s){
            alpha[it - 'a'] --;
            if (alpha[it - 'a'] < 0)
                return false;
       }

        return true;
    }
};