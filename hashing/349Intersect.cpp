#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
using namespace std;

class Solution{
    public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2){
        unordered_set<int> set(nums1.begin(), nums1.end());
        vector<int> result;
        for(int num : nums2){
            if(set.count(num)){
                result.push_back(num);
                set.erase(num); // To avoid duplicates in the result
            }
        }
        return result;
    }
};
int main(){
    Solution sol;
    vector<int> nums1 = {1,2,2,1};
    vector<int> nums2 = {2,2};
    vector<int> res = sol.intersection(nums1, nums2);
    cout<<"Intersection: ";
    for(int num : res){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}