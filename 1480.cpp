/*
1480. Running Sum of 1d Array
Easy
5.7K
283
Companies
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.*/


class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result {};
        result.push_back(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            result.push_back(result[i-1] + nums[i]);
        }
        return result;
    }
};