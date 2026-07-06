#include<bits/stdc++.h>
using namespace std;

int squaresum(int num){
    int ans=0;
    while(num>0){
        int a=num%10;
        ans+=a*a;
        num=num/10;
    }
    return ans;
}
bool happyNum(int num){
    int slow=num;
    int fast=num;

    while(fast!=1){
        slow=squaresum(slow);
        fast=squaresum(fast);
        fast=squaresum(fast);
        if(slow==fast && slow!=1) return false;
    }
    return true;
}
int main(){
    int num=0;
    while(true){
        cin>>num;
        cout<<happyNum(num)<<endl;
    }
    return 0;
}