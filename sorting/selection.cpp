#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution{
    public:
    void selectionSort(vector<int>& nums){
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            int mini = i;
            for(int j=i+1;j<n;j++){
                if(nums[j]<nums[mini]){
                    mini=j;
                }
            }
            swap(nums[i], nums[mini]);
        }
    }
};
int main(){
    Solution sol;
    vector<int> nums= {64, 25, 12, 22, 11};
    sol.selectionSort(nums);
    cout<<"Sorted array: ";
    for(int num :nums){
        cout<<num<<" ";
    }
    cout<<endl;
    return 0;
}   