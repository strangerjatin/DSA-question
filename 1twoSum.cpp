#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution{
    public:
    vector<int> twoSum(vector<int>& nums, int target){
        unordered_map<int, int> map;
        for(int i =0 ; i < nums.size();i++){
            int complement = target - nums[i];
            if(map.count(complement)){
                return {map[complement], i};
            }
            else{
                map[nums[i]] = i;
            }
        }
        return {}; 
    }
};

int main(){
    Solution sol;
    vector<int> nums = {2,7,11,15};
    int target = 11;
    vector<int> result= sol.twoSum(nums, target);
    cout << "Indices:" << result[0] << "," << result[1] << endl;
    return 0;

}