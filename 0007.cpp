/*7. Reverse Integer
Medium
9.4K
11.4K
Companies
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).*/

class Solution {
public:
    int reverse(int x) {
        string input = to_string(x);
        bool negative = false;
        char temp;
        if (input[0] == '-'){               // remove leading -
            negative = true;
            input.erase(0, 1);
        }

        for (int i = 0; i < (input.size() / 2); i++){       // reverse string
            temp = input[input.size() - i - 1];
            input[input.size() - i - 1] = input[i];
            input[i] = temp;
        }

        if (input.size() == 10){                    // special case
            if ((input[0] - '0') > 2){
                return 0;
            } else if (input[0] == '2'){
                if (stoi(input.substr(1,9)) > 147483647 && negative == false || stoi(input.substr(1,9)) > 147483648 && negative == true){
                    return 0;
                }
            }
        }

        if (negative){
            input = '-' + input;
        }

        //cout << input << endl;
        //cout << INT_MIN << endl;
        //cout << INT_MAX << endl;
        //cout << input.substr(1,9) << endl;

        return stoi(input);
    }
};
