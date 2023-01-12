/*17. Letter Combinations of a Phone Number
Medium
13.7K
800
Companies
Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

 */

class Solution {
public:

    vector<string> result = {};
    map<char, vector<char>> m;

    void recursive(string input, string current, int depth){

        if (depth == input.size()){
            result.push_back(current);
        } else {
            for (int i = 0; i < m[input[depth]].size(); i++){
                recursive(input, current + m[input[depth]][i] , depth+1);
            }
        }

        


    }



    vector<string> letterCombinations(string digits) {
        m['2'] = {'a', 'b', 'c'};
        m['3'] = {'d', 'e', 'f'};
        m['4'] = {'g', 'h', 'i'};
        m['5'] = {'j', 'k', 'l'};
        m['6'] = {'m', 'n', 'o'};
        m['7'] = {'p', 'q', 'r', 's'};
        m['8'] = {'t', 'u', 'v'};
        m['9'] = {'w', 'x', 'y', 'z'};
        if (digits.size() > 0)
            recursive(digits, "", 0);

        return result;
    }
};