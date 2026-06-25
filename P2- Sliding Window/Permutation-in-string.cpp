#include<bits/stdc++.h>
using namespace std;

bool permutationCheck(string s1, string s2){
    if(s1.length()>s2.length()){
        return false;
    }
    vector<int> v1(26,0), v2(26,0);

    for(int i=0;i<s1.length();i++){
        v1[s1[i]-'a']++;
        v2[s2[i]-'a']++;
    }
    if(v1==v2){
        return true;
    }
    for(int i=0;i<s2.length()-s1.length();i++){
        v2[s2[i]-'a']--;
        v2[s2[i+s1.size()]-'a']++;
        if(v1==v2){
            return true;
        }
    }
    return false;
}

int main(){
    cout<<permutationCheck("ad", "eidbaooo");
    return 0;
}