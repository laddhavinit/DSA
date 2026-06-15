#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int windowSort(vector<int> arr){
    int left=-1,right=-1;
    int n=arr.size()-1;
    int maxseen=arr[0],minseen=arr[n];
    for(int i=0;i<arr.size();i++){
        maxseen=max(arr[i],maxseen);
        if(arr[i]<maxseen){
            right=i;
        }
    }
    if(right==-1){
        return 0;
    }
    for(int i=n;i>=0;i--){
        minseen=min(minseen,arr[i]);
        if(arr[i]>minseen){
            left=i;
        }
    }
    // cout<<left<<" "<<right<<endl;
    return right-left+1;
}
int main(){
    vector<int> arr={1,2,3,4,3,5,6,5,3,6,7,3,6,7,8};
    cout<<windowSort(arr);
return 0;
}