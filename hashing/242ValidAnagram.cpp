#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

class Solution{
    public:
    bool isAna(string s, string t){
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s.length() != t.length()){
            return false; 
        }
        else{
            return s == t;
        }
    }
};

int main(){
    Solution sol;
    string s = "anagram";
    string t = "nagar1am";
    bool res = sol.isAna(s,t);
    if(res){
        cout<<"The strings are anagrams."<<endl;
    }
    else{
        cout<<"The strings are not anagrams."<<endl;
    }
}