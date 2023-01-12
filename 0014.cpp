/*14. Longest Common Prefix
Easy
12.1K
3.7K
Companies
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".
 */

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        char test = strs[0][0];

        for (int i = 0; i < strs[0].size(); i++){
            test = strs[0][i];
            for (int j = 1; j < strs.size(); j++){
                if (strs[j][i] != test) return result;
            }
            result.push_back(test);
        }
        return result;
    }
};