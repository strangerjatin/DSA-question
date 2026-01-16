                                            // 4. Median of Two Sorted Arrays

// Hard

// Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

// The overall run time complexity should be O(log (m+n)).


// Example 1:

// Input: nums1 = [1,3], nums2 = [2]
// Output: 2.00000
// Explanation: merged array = [1,2,3] and median is 2.
// Example 2:

// Input: nums1 = [1,2], nums2 = [3,4]
// Output: 2.50000
// Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
 

// Constraints:
//     nums1.length == m
//     nums2.length == n
//     0 <= m <= 1000
//     0 <= n <= 1000
//     1 <= m + n <= 2000
//     -106 <= nums1[i], nums2[i] <= 106

// Topics:-  Array,    Binary Search, Divide and Conquer





#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector<int>mixed;

        for(int x : nums1) mixed.push_back(x);
        for(int x : nums2) mixed.push_back(x);
        int o=mixed.size();
        sort(mixed.begin(), mixed.end());

        for(int i=0;i<o;i++){
            if(o%2!=0){
                return mixed[o/2];
            }
            else{
                return (mixed[o/2]+ mixed[(o/2)-1])/2.0;
            }
        }

    return 0;
    }
};

int main() {
    Solution solution;
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2,4};

    double median = solution.findMedianSortedArrays(nums1, nums2);
    cout << "Median: " << median << endl;

    return 0;
}