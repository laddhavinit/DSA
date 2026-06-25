#include<bits/stdc++.h>
using namespace std;

void stringsAnagram(string s, string p, vector<int> &ans){
    vector<int> v1(26,0),v2(26,0);

    for(int i=0;i<p.size();i++){
        v1[p[i]-'a']++;
        v2[s[i]-'a']++;
    }
    int i=0,j=p.size();
    if(v1==v2){
        ans.push_back(i);
    }
    while(j<s.size()){
        v2[s[i++]-'a']--;
        v2[s[j++]-'a']++;
        if(v1==v2){
            ans.push_back(i);
        }
    }
}

int main(){
    string s="abab", p="ab";
    vector<int> ans;
    stringsAnagram(s, p, ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}