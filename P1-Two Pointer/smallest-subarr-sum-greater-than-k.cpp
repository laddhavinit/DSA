#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int func(vector<int> v, int k){
    int i=0,j=0;
    int ans=INT_MAX;
    int sum=0;
    while(j<v.size()){
        sum+=v[j];
        while(sum>k){
            ans=min(ans, j-i+1);
            sum-=v[i];
            i++;
        }
        j++;
    }
    return ans;
}
int main(){
    vector<int> v={2, 3, 1, 2, 4, 3};
    int target=7;
    cout<<func(v,target);
    return 0;
    
}