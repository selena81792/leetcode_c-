/*8. String to Integer (atoi)
Medium
2.8K
8.3K
Companies
Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer (similar to C/C++'s atoi function).

The algorithm for myAtoi(string s) is as follows:

Read in and ignore any leading whitespace.
Check if the next character (if not already at the end of the string) is '-' or '+'. Read this character in if it is either. This determines if the final result is negative or positive respectively. Assume the result is positive if neither is present.
Read in next the characters until the next non-digit character or the end of the input is reached. The rest of the string is ignored.
Convert these digits into an integer (i.e. "123" -> 123, "0032" -> 32). If no digits were read, then the integer is 0. Change the sign as necessary (from step 2).
If the integer is out of the 32-bit signed integer range [-231, 231 - 1], then clamp the integer so that it remains in the range. Specifically, integers less than -231 should be clamped to -231, and integers greater than 231 - 1 should be clamped to 231 - 1.
Return the integer as the final result.
Note:

Only the space character ' ' is considered a whitespace character.
Do not ignore any characters other than the leading whitespace or the rest of the string after the digits.
 */

class Solution {
public:
    int baddie(bool negative){
        if (negative){
            return INT_MIN;
        } else {
            return INT_MAX;
        }
    }

    int myAtoi(string s) {
        bool negative = false;
        int length = 0;
        string num = "";

        if (s.size() == 0) return 0;
        while (s[0] == ' '){
            s.erase(0,1);
        }
        if (s.size() == 0) return 0;
        if (s[0] == '-'){
            s.erase(0,1);
            negative = true;
        } else if (s[0] == '+'){
            s.erase(0,1);
        }
        if (s.size() == 0) return 0;
        while (s[0] == '0'){
            s.erase(0,1);
        }
        if (s.size() == 0) return 0;
        int i = 0;
        while (s[i] >= '0' && s[i] <= '9'){
            num.push_back(s[i]);
            i++;
        }
        if (num.size() == 0) return 0;
        else if (num.size() > 10) return baddie(negative);
        else if (num.size() == 10){
            if (num[0] > '2') return baddie(negative);
            else if (num[0] == '2'){
                if (stoi(num.substr(1,9)) > 147483648 && negative || stoi(num.substr(1,9)) > 147483647 && negative == false){
                    return baddie(negative);
                }
            }
        }
        if (num == "2147483648" && negative) return -2147483648;

        return negative? (-1) *stoi(num) : stoi(num) ;
        //return stoi(num);

        //for ()



        cout << num << endl;
        cout << INT_MIN << endl;
        cout << INT_MAX << endl;



        return -1;
    }
};