#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

int characterReplacement(string s, int k){
    int i=0,j=0;
    int ans=0;
    int maxi=-1;
    vector<int> v(26,0);
    while(j<s.size()){
        v[s[j]-'A']++;
        maxi=max(maxi,v[s[j]-'A']);
        while(j-i+1-maxi>k){
            v[s[i]-'A']--;
            i++;
            maxi=0;
            for(int i=0;i<v.size();i++){
                maxi=max(maxi,v[i]);
            }
        }
        ans=max(ans,j-i+1);
        j++;
    }
    return ans;
}

int main(){
    string s= "AABABBA";
    int k=1;
    cout<<characterReplacement(s,k);
    return 0;
}