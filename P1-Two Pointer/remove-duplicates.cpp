#include<iostream>
#include<vector>
using namespace std;

int removeduplicates(vector<int> &arr){
    int i=0,j=1;
    while(i<j && j<arr.size()){
        if(arr[i]!=arr[j]){
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }
    return i+1;
}
int main(){
    vector<int> a= {0,0,1,1,1,2,2,3,3,4,5,5};
    
    int ans=removeduplicates(a);
    for(int i=0;i<ans;i++){
        cout<<a[i]<<" ";
    }
return 0;
}