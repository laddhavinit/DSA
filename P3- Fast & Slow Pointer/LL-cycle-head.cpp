#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int val){
        data=val;
        next=NULL;
    }   
};

Node* node(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(fast==slow){
            slow=head;
            if(fast==head){
                return head;
            }
            while(true){
                slow=slow->next;
                fast=fast->next;
                if(slow==fast ){
                    return slow;
                }
            }
        }
    }
    return NULL;
}

int main(){
    Node* head=new Node(3);
    head->next= new Node(2);
    // head->next->next=head;
    head->next->next= new Node(0);
    head->next->next->next= new Node(4);
    head->next->next->next=head->next;

    cout<<node(head)->data;
    return 0;
}