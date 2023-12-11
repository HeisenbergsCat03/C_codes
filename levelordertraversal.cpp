#include "bits/stdc++.h"
using namespace std;
struct TreeNode{
    int data;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int val){ 
        data = val;
        left = NULL;
        right = NULL;
    }
};
void print(TreeNode* root){
    if(root == NULL){
        return;
    }
    queue<TreeNode*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        TreeNode* node = q.front();
        if(node!=NULL){
            cout<<node->data<<" ";
        if(node->left!=NULL){
            q.push(node->left);
        }
        if(node->right!=NULL){
            q.push(node->right);
        }
        }
        else if(!q.empty())
            q.push(NULL);
    }
    
}