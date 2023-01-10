/*4. Median of Two Sorted Arrays
Hard
21.5K
2.4K
Companies
Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).*/

class Solution {
public:



    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int> result;
        double median = 0;

        int i = 0;
        int j = 0;

        while (i < nums1.size() || j < nums2.size()) {
            if (i >= nums1.size()) {
                result.push_back(nums2[j]);
                j++;
            }
            else if (j >= nums2.size()) {
                result.push_back(nums1[i]);
                i++;
            }
            else {
                if (nums1[i] <= nums2[j]) {
                    result.push_back(nums1[i]);
                    i++;
                }
                else {
                    result.push_back(nums2[j]);
                    j++;
                }
            }
        }

        if (result.size() % 2 == 1){
            median = result[result.size() / 2];
        }
        else {
            median = (result[result.size() / 2 - 1] + result[result.size() / 2]);
            median = median / 2;
        }

        return median;
    }
};