#include<bits/stdc++.h>
using namespace std;


int main(){
    // int arr[]={3,1,3,4,2};
    // int arr[]={1,3,4,2,2};
    int arr[]={3,3,3,3,3};
    int slow=0;
    int fast=0;

    while(true){
        slow=arr[slow];
        fast=arr[fast];
        fast=arr[fast];
        if(fast==slow){
            slow=0;
            while(true){
                slow=arr[slow];
                fast=arr[fast];
                if(slow==fast){
                    cout<<slow;
                    break;
                }
            }
            break;
        }
    }
    return 0;
}