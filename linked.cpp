#include <bits/stdc++.h>
using namespace std;
struct Node{
public:
    int data;
    Node* next;
};
void print(struct Node* n){
    while(n!= NULL){
        cout<<(n->data);
        n=n->next;
    }
}
void InsertAtFront(Node* head, int newdata){
    Node* temp = new Node();
    temp -> next = head;
    temp -> data = newdata;
    head = temp;
}
void InsertAtEnd(Node* head, int newdata)
{
    Node* oghead = head;
    while(head->next!= NULL)
        head = head -> next;
    Node* temp = new Node();
    head -> next = temp;
    temp -> data = newdata;
    head = oghead;
}
void reverse(Node* &head){
    Node* prev = new Node();
    Node* curr = new Node();
    Node* next_node = new Node();
    prev = NULL;
    curr = head;
    while(curr!=NULL){
        next_node = curr ->next;
        curr->next = prev;
        prev = curr;
        curr = next_node;
    }
    head = prev; 
}

int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    // allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();
    head->data = 1; // assign data in first node
    head->next = second; // Link first node with second
    second->data = 2; // assign data to second node
    second->next = third;
    third->data = 3; // assign data to third node
    third->next = NULL;
    // Function call
    reverse(head);
    print(head);
    return 0;
}
