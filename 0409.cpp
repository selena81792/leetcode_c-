/*409. Longest Palindrome
Easy
4.2K
252
Companies
Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.

Letters are case sensitive, for example, "Aa" is not considered a palindrome here.
 */

class Solution {
public:
    int longestPalindrome(string s) {
        int result = 0;
        bool odd = false;
        map<char, int> m;
        //map<char, int>::iterator it;

        for (int i = 0; i < s.size(); i++){
            m[s[i]]++;
        }

        for (map<char, int>::iterator it = m.begin(); it != m.end(); it++){
            
            if (it->second % 2 == 0){
                result += it->second;
            } else {
                result += it->second - 1;
                odd = true;
            }
        }

        if (odd) result += 1;



        

        return result;
    }
};