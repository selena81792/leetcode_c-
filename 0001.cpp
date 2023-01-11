/*1. Two Sum
Easy
42.1K
1.4K
Companies
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        int r1 = 0;
        int r2 = 1;

        for (int i=0; i< nums.size(); i++){
            for (int j=0;j<nums.size();j++){
                if (i==j) continue;
                if (nums[i]+nums[j]==target){
                    r1 = i;
                    r2 = j;
                    break;
                }
            }
        }


        vector<int> result {r1, r2};
        return result;
    }
};