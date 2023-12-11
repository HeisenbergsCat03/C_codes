#include <bits/stdc++.h> 
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};
void insertAtBeginning(Node* &head, int val){
    

}
int main(){  // initialized with 1 -> 69 -> 69420 -> 1 .....
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
    third -> next = head;
    Node* last = third;
}

