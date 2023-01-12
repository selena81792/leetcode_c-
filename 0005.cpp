/*5. Longest Palindromic Substring
Medium
23.4K
1.4K
Companies
Given a string s, return the longest 
palindromic
 
substring
 in s.*/

class Solution {
public:

    string longestPalindrome(string s) {
        int longest = 0;
        int depth = 0;
        string result = "";

        for (int i = 0; i < s.size(); i++){
            // odd
            depth = 0;
            while (i - depth >= 0 && i + depth < s.size()) {
                if (s[i - depth] == s[i + depth]){
                    if ((depth * 2 + 1) > longest){
                        longest = (depth * 2 + 1);
                        result = s.substr(i - depth, longest);
                    }
                    depth++;
                } else {
                    break;
                }
            }

            // even
            depth = 0;
            while (i - depth >= 0 && i + depth + 1 < s.size()){
                if (s[i - depth] == s[i + depth + 1]){
                    if ((depth * 2 + 2) > longest){
                        longest = (depth * 2 + 2);
                        result = s.substr(i - depth, longest);
                    }
                    depth++;
                } else {
                    break;
                }
            }


        }

        return result;
    }
};
