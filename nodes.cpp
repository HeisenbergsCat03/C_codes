#include <bits/stdc++.h>
using namespace std;
struct Node{
public:
    int data;
    Node* next;
};
int nodes(Node* head){
    int count = 0;
    Node* temp = head;
    while(true){

        temp = temp->next;
        count++;
        if(temp == head){
            break;
        }
    }
    return count;

}
int main(){

    
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;
    Node* fourth = NULL;
    // allocate 3 nodes in the heap
    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();
    head->data = 1; // assign data in first node
    head->next = second; // Link first node with second
    second->data = 2; // assign data to second node
    second->next = third;
    third->data = 3; // assign data to third node
    third->next = fourth;
    fourth->data = 4;
    fourth->next = head;
    // Function call
    cout<<nodes(head)<<endl; 
    return 0;
}