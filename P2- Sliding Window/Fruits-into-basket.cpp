#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fruitsIntoBasket(vector<int> arr){
    int i=0,j=0;
    map<int,int> m;
    int ans=-1;
    int uniq=0;
    while(j<arr.size()){
        if(m[arr[j]]==0){
            uniq++;
        }
        m[arr[j]]++;
        if(uniq<=2){
            ans=max(ans,j-i+1);
        }
        else{
            while(uniq>2){
                m[arr[i]]--;
                if(m[arr[i]]==0){
                    uniq--;
                }
                i++;
            }
        }
        j++;
    }
    return ans;
}
int main(){
    vector<int> v={1,1,2,3,2,2};

    cout<<fruitsIntoBasket(v);
    return 0;
}