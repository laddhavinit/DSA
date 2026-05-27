#include<iostream>
#include<vector>
using namespace std;


vector<int> twoSum(vector<int>& numbers,int k){
    int i=0, j=numbers.size()-1;
    while(i<j){
        if(numbers[i]+numbers[j]==k){
            return {i+1,j+1};
        }
        else if(numbers[i]+numbers[j]>k){
            j--;
        }
        else{
            i++;
        }
    }
    return {-1,-1};
}
int main(){
    vector<int> a= {2, 7, 11, 15};
    int target=9;
    vector<int> ans = twoSum(a, target);

    cout<<ans[0]<<" "<<ans[1]<<endl;
    return 0;
}