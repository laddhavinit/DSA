#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v={3,1,5,4,7};
    int ans=0;
    int target=12;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size()-2;i++){
        int j=i+1,k=v.size()-1;
        while(j<k){
            if(v[i]+v[j]+v[k]<target){
                ans+=k-j;
                j++;
            }
            else{
                k--;
            }
        }
    }
    cout<<ans;
return 0;
}