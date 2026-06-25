#include<bits/stdc++.h>
using namespace std;

int maxConsecutiveOnes(vector<int> v, int k){
    int maxlen=0;
    int z=0,o=0;
    int i=0;
    for(int j=0;j<v.size();j++){
        if(v[j]==0){
            z++;
        }
        else{
            o++;
        }
        
        if(z>k){
            if(v[i]==0){
                z--;
            }
            else{
                o--;
            }
            i++;
        }
        maxlen=max(maxlen,j-i+1);
    }
    return maxlen;
}

int main(){
    vector<int> v={0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int k=3;

    cout<<maxConsecutiveOnes(v,k);

    return 0;
}