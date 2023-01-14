/*22. Generate Parentheses
Medium
16.6K
647
Companies
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

 
 */

class Solution {
public:
    vector<string> result = {};

    void recursive(int start, int end, string current){
        if (start == 0 && end == 0){
            result.push_back(current);
            cout << current << endl;
        } else {
            if (start && end){
                recursive(start-1, end+1, current + "(");
                recursive(start, end-1, current + ")");
            } else if (start){
                recursive(start-1, end+1, current + "(");
            } else {
                recursive(start, end-1, current + ")");
            }
        }
    }

    vector<string> generateParenthesis(int n) {
        recursive(n, 0, "");

        return result;
    }
};