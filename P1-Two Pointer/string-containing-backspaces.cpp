#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool compareString(string a, string b){
    int i=a.length()-1,j=b.length()-1;
    int x=0,y=0;
    while (i>=0 || j>=0)
    {
        while(i>=0){
            if(a[i]=='#'){
                x++;
                i--;
            }
            else if(x>0){
                x--;
                i--;
            }
            else{
                break;
            }
        }
        while(j>=0){
            if(b[j]=='#'){
                y++;
                j--;
            }
            else if(y>0){
                y--;
                j--;
            }
            else{
                break;
            }
        }
        if(i>=0 && j>=0){
            if(a[i]!=b[i]){
                return false;
            }
        }
        else if(i>=0 || j>=0){
            return false;
        }
        i--;
        j--;
    }
    return true;
    
}
int main(){
    string a="a#b#",b="ad#";    
    cout<<compareString(a,b);
    return 0;
}