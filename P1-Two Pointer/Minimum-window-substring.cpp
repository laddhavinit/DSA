#include<bits/stdc++.h>
using namespace std;

string minwindowsubstr(string s, string t){
    int valid=0,req=0;
    int i=0,j=0;
    int minlen=INT_MAX;
    int start=0;
    vector<int> v1(256,0), v2(256,0);

    for(int i=0;i<t.size();i++){
        v1[t[i]]++;
    }
    for(int i=0;i<256;i++){
        if(v1[i]>0){
            req++;
        }
    }

    while(j<s.length()){
        v2[s[j]]++;
        if(v1[s[j]]==v2[s[j]]){
            valid++;
        }
        while(valid==req){
            if(minlen>j-i+1){
                minlen=j-i+1;
                start=i;
            }
            v2[s[i]]--;
            if(v1[s[i]]>0 && v1[s[i]]!=v2[s[i]]){
                valid--;
            }
            i++;
        }
        j++;
    }
    return minlen==INT_MAX?"":s.substr(start,minlen);
}
int main(){
    string s = "cabwefgewcwaefgcf", t = "cae";
    cout<<minwindowsubstr(s,t);
    return 0;
}