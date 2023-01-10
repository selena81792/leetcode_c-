/*
205. Isomorphic Strings
Easy
5.8K
1.2K
Companies
Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself..*/


class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> m1, m2;

        for (int i = 0; i < s.size(); i++){
            if (m1[s[i]]){
                if (m1[s[i]] != t[i]) return false;
            }
            if (m2[t[i]]){
                if (m2[t[i]] != s[i]) return false;
            }
            m1[s[i]] = t[i];
            m2[t[i]] = s[i];
        }
        return true;
    }


    bool old_isIsomorphic(string s, string t) {
        for (int i = 0; i < s.size(); i++){
            for (int j = 0; j < s.size(); j++){
                if (i == j) continue;
                if (s[i] == s[j]){
                    if (t[i] != t[j]){
                        return false;
                    }
                } else {
                    if (t[i] == t[j]){
                        return false;
                    }
                }
            }
        }
        return true;
    }
};