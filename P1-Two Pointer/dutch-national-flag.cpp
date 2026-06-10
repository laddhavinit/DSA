#include<iostream>
#include<vector>
using namespace std;


void sortorder(vector<int> &arr){
    int i=0,k=arr.size()-1;
    int j=0;
    while(j<=k && j<arr.size()){
        // cout<<1;
        if(arr[j]==0){
            swap(arr[i++],arr[j++]);
        }
        else if(arr[j]==2){
            swap(arr[j],arr[k--]);
        }
        else{
            j++;
        }
    }

}

int main(){
    vector<int> arr={1,0,2,1,1,0,2,0};
    sortorder(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
return 0;
}