#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
    
    
    
    void bubbleSort(vector<int> &arr, int n){
        if(n==1) return ;

        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
        bubbleSort(arr, n-1);
    }
    void bubblesort(vector<int>&arr){
        bubbleSort(arr, arr.size());
    }

};

int main(){
    Solution sol;
    vector<int> arr={64, 34, 25, 12, 22, 11, 90};
    sol.bubblesort(arr);
    cout<<"Sorted Array: ";
    for(int i:arr){
        cout<<i<<" ";
    }
}