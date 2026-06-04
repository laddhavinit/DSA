#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr={-1,2,1,-4};
    int target=1;
    int ans=0;
    int maxdiff=INT_MAX;
    int diff=maxdiff;
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size()-2;i++){
        int j=i+1,k=arr.size()-1;
        while(j<k){
            int sum=arr[i]+arr[j]+arr[k];
            if(sum==target){
                cout<<sum;
                return 0;
            }
            else if(sum<target){
                j++;
                diff=abs(target-sum);
                if(diff<maxdiff){
                    maxdiff=diff;
                    ans=sum;
                }
            }
            else{
                k--;
                diff=abs(target-sum);
                if(diff<maxdiff){
                    maxdiff=diff;
                    ans=sum;
                }
            }
        }
    }
    cout<<ans;
return 0;
}