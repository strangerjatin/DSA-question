/*// 229. Majority Element II
Medium

Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

Example 1:

Input: nums = [3,2,3]
Output: [3]
Example 2:

Input: nums = [1]
Output: [1]
Example 3:

Input: nums = [1,2]
Output: [1,2]
*/

#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution{
    public:
    vector<int> majorityElement(vector<int>& nums){
        unordered_map<int ,int>mpp;
        vector<int> res;
        for(int i:nums){
            mpp[i]++;
        }
        for(auto it:mpp){
            if(it.second>nums.size()/3){
                res.push_back(it.first);
            }
        }
        return res;
    }
};

int main(){
    Solution sol;
    vector<int> nums={3,2,3,2};
    vector<int> res = sol.majorityElement(nums);
    cout<<"Majority elements: ";
    for(int num:res){
        cout<<num<<" ";
    }
}