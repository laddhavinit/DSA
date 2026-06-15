#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxsumsubarray(vector<int> arr, int k){
    int sum=0;
    int maxi=INT_MIN;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    int i=1,j=k;
    maxi=max(sum,maxi);
    while(j<arr.size()){
        sum+=arr[j]-arr[i-1];
        maxi=max(sum,maxi);
        i++;
        j++;
    }
    return maxi;
}
int main(){
    vector<int> arr={100,200,300,400};
    int k=1;
    int ans=0;
    ans=maxsumsubarray(arr,k);
    cout<<ans;
    return 0;
}