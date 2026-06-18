#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s){
    map<int,int> m;
    int i=0,j=0;
    int k=0;
    int ans=-1;
    while(j<s.length()){
        m[s[j]]++;
        k=j-i+1;
        if(m.size()==k){
            ans=max(ans,k);
        }
        else{
            while(m.size()!=k){
                m[s[i]]--;
                if(m[s[i]]==0){
                    m.erase(s[i]);
                }
                i++;
                k=j-i+1;
            }
        }
        j++;
    }
    return ans;
}
int main(){
    string s="abcabcbb";
    cout<<lengthOfLongestSubstring(s);
    return 0;
}