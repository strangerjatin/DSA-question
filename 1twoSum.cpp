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

    }
};

int main(){
    Solution sol;
    vector<int> nums = {10,8,2,7,3,4,9,1};
    int target = 10;
    vector<int> result= sol.twoSum(nums, target);
    cout << "Indices:" << result[0] << "," << result[1] << endl;
    return 0;

}