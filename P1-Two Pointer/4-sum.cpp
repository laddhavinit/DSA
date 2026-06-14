#include <iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr={2,2,2,2,2};
    vector<vector<int>> ans;
    int target=8;
    sort(arr.begin(),arr.end());
    // cout<<"1234";
    for(int i=0;i<arr.size()-3;i++){
        if(i>0 && arr[i]==arr[i-1]){
            continue;
        }
        for(int j=i+1;j<arr.size()-2;j++){
            if(j>i+1 && arr[j]==arr[j-1]){
                continue;
            }
            int k=j+1,l=arr.size()-1;
            while(k<l){
                if(arr[i]+arr[j]+arr[k]+arr[l]==target){
                    ans.push_back({arr[i],arr[j],arr[k],arr[l]});
                    // cout<<arr[i]<<arr[j]<<arr[k]<<arr[l];
                    k++;
                    l--;
                    while(k<l && arr[k]==arr[k-1]){
                        k++;
                    }
                    while(k<l && arr[l]==arr[l+1]){
                        l--;
                    }
                }
                else if(arr[i]+arr[j]+arr[k]+arr[l]<target){
                    k++;
                }
                else{
                    l--;
                }
            }
        }
    }
    // cout<<ans.size();
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}