#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

class Solution{
    public:
    bool dupli(vector<int>& nums){
        unordered_map<int, int>map;
        for(int i: nums){
            if(map.count(i)){
                return true;
            }
            else{
                map[i]=i;
            }
        }
        return false;
    }
};
int main(){
    Solution sol;
    vector<int> nums= {1,2,3,4,5,6};
    bool res= sol.dupli(nums);
    if(res){
        cout<<"Contains Duplicate"<<endl;
    }
    else{
        cout<<"No Duplicate Found"<<endl;
    }
    return 0;
}