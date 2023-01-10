/*3. Longest Substring Without Repeating Characters
Medium
31.3K
1.4K
Companies
Given a string s, find the length of the longest 
substring
 without repeating characters.

 */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int result = 1;
        int temp = 1;

        if (s.size() == 0) return 0;

        for (int i=0; i< s.size() - 1; i++){
            temp = 1;
            while (i+temp < s.size() && s.substr(i, temp).find(s[i+temp]) == string::npos) temp++;
            result = std::max(result, temp);
            if (s.size() - i <= result) break;
        }
        

        return result;
    }
};
