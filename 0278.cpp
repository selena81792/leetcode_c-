/*
278. First Bad Version
Easy
6.8K
2.6K
Companies
You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.

Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, which causes all the following ones to be bad.

You are given an API bool isBadVersion(version) which returns whether version is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API.*/


class Solution {
public:
    int result;

    void binary(int start, int end){
        if (end >= start){
            int mid = (end-start)/2 + start;
            //cout << start << mid << end << endl;
            if (isBadVersion(mid)){
                result = min(result, mid);
                binary(start, mid-1);
            } else{
                binary(mid+1, end);
            }
        }
    }

    int firstBadVersion(int n) {
        result = n;

        binary(1, n);

        return result;
    }
};