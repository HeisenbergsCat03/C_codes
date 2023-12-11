#include <bits/stdc++.h> 
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node *prev;
};
Node* deleteNode(Node* head_ref, int x){
    Node *temp = head_ref;
    for(int i = 0; i<x;i++){
        temp = temp->next;
    }
    temp->next->prev = temp->prev;
    temp->prev->next = temp->next;
    return head_ref;

Node* reverseDLL(Node* head){
    Node* temp1 = head;
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    head = temp;
    
}
}
int main(){
    
    return 0;
}
