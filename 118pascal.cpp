#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    vector<vector<int>> generate(int numRows){
        vector<vector<int>>res;
        for(int n=0;n<numRows;n++){
            vector<int>row;
            long long val=1;
            
            for(int r=0;r<=n;r++){
                row.push_back(val);
                val=val*(n-r)/(r+1);
            }
            res.push_back(row);
        }
        return res;
    }
};
int main(){
    Solution sol;
    int numsRows=5;
    vector<vector<int>> res =sol.generate(numsRows);
    for(auto row:res){
        for(auto num:row){
            cout<<num<<" ";
        }
        cout<<endl;
    }
}