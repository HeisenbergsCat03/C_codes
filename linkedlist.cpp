#include <bits/stdc++.h> 
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
bool search(int val, Node* head){
    bool flag = false;
    while(head!=NULL)
    {
        if(head->data == val){
            flag = true;
            break;
        }
        head = head->next;
    }
return flag;
}
void print(Node* n){ //traversal
    while(n->next!=NULL){
        cout<<n->data<<" ";
        n = n->next;
    }
}
void insertAtHead(Node* &head, int val){
    Node* new_node = new Node();
    new_node -> next = head;
    new_node -> data = val;
    head = new_node;
}
void exchangecircle(Node* &head){ // exchanges first and last elements in a circular linked list.
    
}
void insertAtTail(Node* &head, int val){
    Node* new_node = new Node();
    if(head == NULL){
    head = new_node; 
    }
    Node* temp = head;
    while(temp->next !=NULL){
        temp = temp -> next;
    }
    temp->next = new_node;
    new_node -> data = val;
}
void pop(Node* &head, int val){
    Node* new_node = new Node();
    new_node -> data= val;
    new_node;

}
void getNth(int n, Node* head){
    Node* init =  head;
    for(int i = 0;i<n;i++)
    {
        init=init->next;
    }
cout<<init->data<<" ";
}
void reverse(Node* head){   //reverse a linked list iterative approach
Node* prev = NULL;
Node* curr = head;
Node* agla = head -> next;
while(agla != NULL){
    curr -> next = prev;
    prev = curr;
    curr = agla;
    agla = agla ->next;
    }
curr -> next = prev;
head = curr;
print(head);

}
int getMiddle(Node* head){
    if (head == NULL){
        return -1;
    }
    Node* temp = head;
    int count = 1;
    while (temp->next != NULL){
        temp = temp->next;
        count++;
    }
    temp = head;

    for(int i=1;i<=(count/2);i++){
        temp = temp->next;
    }
    return temp->data;
}
bool isCircular(Node* head){
    
}
int count(struct Node* head, int search_for)
    {
        Node* temp = head;
        long long int count = 0;
        while(temp->next != NULL){
            temp = temp->next;
            if(temp->data == search_for)
            count++;
        }
        if(temp->data == search_for)
        count++;
        return count;
    }
int main(){
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    head = new Node();
    second = new Node();
    third = new Node(); 
    head -> data = 1;
    head -> next = second;
    second -> data = 69;
    second -> next = third;
    third -> data = 69420;
    third -> next = NULL;
    insertAtHead(head,0);
    insertAtHead(head, 6969);
    // print(head);
    cout<<count(head,0)<<endl;
}
//     print(head);
//   bool a = (search(69,head));
//    cout<<((a))<<" ";
//    getNth(3,head);
 //   reverse(head);
