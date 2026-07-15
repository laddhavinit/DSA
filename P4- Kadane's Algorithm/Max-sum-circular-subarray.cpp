#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums={1,-2,3,-2};
    int mini=nums[0];
    int maxi=nums[0];
    int minans=nums[0];
    int maxans=nums[0];
    int totsum=nums[0];
    int ans=nums[0];
    for(int i=1;i<nums.size();i++){
        mini=min(mini+nums[i],nums[i]);
        maxi=max(maxi+nums[i],nums[i]);
        minans=min(minans,mini);
        maxans=max(maxans,maxi);
        totsum+=nums[i];
    }
    if(maxans<0){
        cout<< maxans;
        return 0;
    }
    totsum-=minans;
    if(totsum>maxans){
        cout<< totsum;
        return 0;
    }
    cout<<maxans;
    
    return 0;
}