#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={-2,3,-1};
    int maxi=nums[0];
    int mini=nums[0];
    int ans=nums[0];
    for(int i=1;i<nums.size();i++){
        mini=min(nums[i],min(maxi*nums[i],mini*nums[i]));
        maxi=max(nums[i],max(mini*nums[i],maxi*nums[i]));
        ans=max(ans,max(maxi,mini));
    }
    cout<<ans;
    return 0;
}