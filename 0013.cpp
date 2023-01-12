/*13. Roman to Integer
Easy
8.8K
501
Companies
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.
*/

class Solution {
public:
    string input;

    void replaceall(string dummy, string target){
        int position = input.find(dummy);
        while (position != string::npos){
            input.replace(position, dummy.size(), target);
            position = input.find(dummy);
        }
    }

    int romanToInt(string s) {
        int result = 0;
        input = s;

        replaceall("IV", "IIII");
        replaceall("IX", "VIIII");
        replaceall("XL", "XXXX");
        replaceall("XC", "LXXXX");
        replaceall("CD", "CCCC");
        replaceall("CM", "DCCCC");

        cout << input << endl;

        for (int i = 0; i < input.size(); i++){
            switch (input[i]){
                case 'I' : result += 1; break;
                case 'V' : result += 5; break;
                case 'X' : result += 10; break;
                case 'L' : result += 50; break;
                case 'C' : result += 100; break;
                case 'D' : result += 500; break;
                case 'M' : result += 1000; break;
            }
        }


        return result;
    }
};