#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=NULL;
    }   
};

bool hasCycle(Node* head){
    Node* slow=head;
    Node* fast=head;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast= fast->next->next;
        if(fast==slow){
            return true;
        }
    }
    return false;
}
int main(){
    Node* head=new Node(3);
    head->next= new Node(2);
    head->next->next=head;
    // head->next->next= new Node(0);
    // head->next->next->next= new Node(4);
    // head->next->next->next=head->next;

    cout<<hasCycle(head);
    return 0;
}