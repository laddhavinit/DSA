#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void threesum(vector<int> &arr, vector<vector<int>> &ans){
    for(int i=0;i<arr.size();i++){
        if(arr[i]>=0){
            return ;
        }
        while(i>0 && arr[i]==arr[i-1]){
            i++;
        }
        int j=i+1,k=arr.size()-1;
        while(j<k){
            if(arr[j]+arr[k]==-arr[i]){
                ans.push_back({arr[i],arr[j],arr[k]});
                j++;
                k--;
                while(j<k && arr[j]==arr[j-1]){
                    j++;
                }
                while(j<k && arr[k]==arr[k+1]){
                    k--;
                }
            }
            else if(arr[j]+arr[k]<-arr[i]){
                j++;
            }
            else{
                k--;
            }
        }
    }
    return ;
}

int main(){
    vector<int> arr={-1,0,1,2,-1,-4};
    vector<vector<int>> ans;
    sort(arr.begin(),arr.end());
    threesum(arr,ans);
    for(int i=0;i<ans.size();i++){
        for (int j = 0; j < ans[i].size(); j++)
        {
            /* code */
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}