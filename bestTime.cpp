/*Best time to buy and sell stock*/

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

class Solution{
    public:
    int maxProfit(vector<int>&nums){
        int minPrice=INT_MAX;
        int maxProfit=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<minPrice){
                minPrice=nums[i];
            }
            else if(nums[i]-minPrice>maxProfit){
                maxProfit=nums[i]-minPrice;
            }
        }
        return maxProfit;
    }
};

int main(){
    Solution sol;
    vector<int> nums={7,1,5,3,6,4};
    cout<<"Max profit: "<<sol.maxProfit(nums);
}