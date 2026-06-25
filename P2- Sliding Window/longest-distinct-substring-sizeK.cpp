#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int distinctsubstr(string s, int k){
    vector<int> v(26,0);
    int i=0,j=0;
    int dist=0;
    int ans=-1;
    while(j<s.length()){
        if(v[s[j]-'a']==0){
            dist++;
        }
        v[s[j]-'a']++;
        
        if(dist==k){
            ans=max(ans,j-i+1);
        }
        else if(dist>k){
            while(dist>k){
                v[s[i]-'a']--;
                if(v[s[i]-'a']==0){
                    dist--;
                }
                i++;
            }
        }
        j++;
    }
    return ans;
}
int main(){
    string s="aabaaab";
    int k=2;

    cout<<distinctsubstr(s,k);
    return 0;
}