#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr={2,1,-2,-5,-2};
    int ans=arr[0];
    int nodel=arr[0]; //2
    int onedel=0; 
    for(int i=1;i<arr.size();i++){
        int a=arr[i]; // 1 -2
        int b=nodel+arr[i]; //3 1
        int c=onedel+arr[i]; //1 
        int d=nodel; //2
        nodel=max(a,b); // 3
        onedel=max(c,d);// 2
        ans=max(ans,max(nodel, onedel)); //
    }
    cout<<ans;
    return 0;
}