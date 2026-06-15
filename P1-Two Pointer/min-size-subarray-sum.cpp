#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int minimumsizesubarray(vector<int> arr, int target){
    int sum=0;
    int mini=INT_MAX;
    int l=0,h=0;
    while(h<arr.size()){
        sum+=arr[h];
        while(sum>=target){
            mini=min(mini,h-l+1);
            sum-=arr[l++];
        }
        h++;
    }
    return mini==INT_MAX?0:mini;
}
int main(){
    vector<int> arr={12,28,83,4,25,26,25,2,25,25,25,12};
    int target=213;
    int ans=0;
    ans=minimumsizesubarray(arr, target);
    cout<<ans;
    return 0;
}