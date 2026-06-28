#include<bits/stdc++.h>
using namespace std;

void substring(string s, vector<string> words, vector<int> &ans){
    unordered_map<string,int> m1;
    int wl= words[0].size();
    int wc= words.size();
    int req=wl*wc;
    for(int i=0;i<words.size();i++){
        m1[words[i]]++;
    }
    for (int i = 0; i < wl; i++)
    {
        int start=i, count=0;
        unordered_map<string, int> m2;
        for(int j=i;j<=s.size()-wl;j+=wl){
            string helper=s.substr(j,wl);
            if(m1.count(helper)>0){
                m2[helper]++;
                count++;
                while(m2[helper]>m1[helper]){
                    m2[s.substr(start, wl)]--;
                    count--;
                    start+=wl;
                }
                if(count==wc){
                    ans.push_back(start);
                    m2[s.substr(start, wl)]--;
                    start+=wl;
                    count--;
                }
            }
            else{
                m2.clear();
                start=j+wl;
                count=0;
            }
        }
    }
    
}

int main(){
    vector<string> words = {"bar","foo"};
    string s="barfoothefoobarman";
    vector<int> ans;
    substring(s,words, ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}