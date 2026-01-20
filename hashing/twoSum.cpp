#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution{
    public:
    vector<int> twoSum(vector<int>&nums, int target ){
        unordered_map<int, int> map;
        for(int i:nums){
            int complement=target -i;
            if(map.count(complement)){
                return {map[complement], i};
            }
            else{
                map[i]=i;
            }
        }
        return {};
    }
};

int main(){
    Solution sol;
    vector<int> nums= {2,7,11,15};
    int target = 9;
    vector<int> res = sol.twoSum(nums, target);
    cout<<"Indices: "<< res[0] << "," << res[1] << endl;
    return 0;
}