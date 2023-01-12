/*167. Two Sum II - Input Array Is Sorted
Medium
8.6K
1.1K
Companies
Given a 1-indexed array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number. Let these two numbers be numbers[index1] and numbers[index2] where 1 <= index1 < index2 <= numbers.length.

Return the indices of the two numbers, index1 and index2, added by one as an integer array [index1, index2] of length 2.

The tests are generated such that there is exactly one solution. You may not use the same element twice.

Your solution must use only constant extra space.
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int n1 = 0;
        int n2 = numbers.size()-1;
        int sum = numbers[n1]+numbers[n2];
        while (sum != target){
            if (sum < target) n1++;
            else if (sum > target) n2--;
            sum = numbers[n1]+numbers[n2];
        }

        vector<int> result = {n1+1, n2+1};

        return result;


    }
};