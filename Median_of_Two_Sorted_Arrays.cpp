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