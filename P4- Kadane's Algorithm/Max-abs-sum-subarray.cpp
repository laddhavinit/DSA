#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={2,-5,1,-4,3,-2};
    int mini=arr[0];
    int maxi=arr[0];
    int minans=arr[0];
    int maxans=arr[0];
    int ans=arr[0];
    for(int i=1;i<arr.size();i++){
        mini=min(mini+arr[i],arr[i]);
        maxi=max(maxi+arr[i],arr[i]);
        minans=min(minans,mini);
        maxans=max(maxans,maxi);
    }
    if(minans<0){
        minans=abs(minans);
    }
    if(minans>maxans){
        cout<<minans;
    }
    return 0;
}