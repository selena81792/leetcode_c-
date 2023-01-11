/*704. Binary Search
Easy
7.7K
166
Companies
Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.
 */
class Solution {
public:
    int result = -1;

    void binary(vector<int>& nums, int start, int end, int target) {
        if (end >= start){
            int mid = (start+end)/2;
            if (nums[mid] == target) result = mid;
            else if (nums[mid] > target) binary(nums, start, mid-1, target);
            else binary(nums, mid+1, end, target);
        }
    }

    int search(vector<int>& nums, int target) {
        binary(nums, 0, nums.size()-1, target);
        return result;
    }
};