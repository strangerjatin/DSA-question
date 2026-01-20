#include<iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;

class Solution{
    public:
    int freq(vector<int>&nums, int target){
        unordered_map<int, int> freqmap;
        for(int num : nums){
            freqmap[num]++;
        }
        return freqmap[target];
    }
};

int main(){
    Solution sol;
    vector<int>nums = {1,2,3,2,4,2,5};
    int target =2;
    int frequency = sol.freq(nums, target);
    cout<<"Frequency of "<< target << " is: " << frequency << endl;
    return 0;

}
