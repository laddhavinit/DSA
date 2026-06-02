#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

vector<int> sortedsquare(vector<int> &a, vector<int> &b){
    for(int i=0;i<a.size();i++){
        a[i]=a[i]*a[i];
    }
    cout<<a.size()<<endl;
    int i=0,j=a.size()-1;
    // int k=0;
    while(i<=j){
        // cout<<k++<<endl;
        if(a[i]>=a[j]){
            b.push_back(a[i++]);
        }
        else{
            b.push_back(a[j--]);
        }
    }
    reverse(b.begin(),b.end());
    return b;
}
int main(){
    vector<int> v={-4,-1,0,3,10};
    vector<int> ans;

    ans=sortedsquare(v,ans);
    // cout<<ans.size();
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}