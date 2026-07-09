#include<bits/stdc++.h>
using namespace std;


int main(){
    vector<int> arr={5,4,-1,7,8};
    int ans=arr[0];
    int best=arr[0];
    for(int i=1;i<arr.size();i++){
        best=max(arr[i], best+arr[i]);
        ans=max(ans,best);
    }
    cout<<ans;
    return 0;
}