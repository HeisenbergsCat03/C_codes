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
        int search(vector<int> v, int start,int finish,int find){
            for(int i = start;i<=finish;i++){
                if(v[i]==find)
                return i;
            }
            return -1;
        }
        
    int idx = 0;
    TreeNode* build(vector<int> postorder, vector<int> inorder, int start, int end) {
        idx = postorder.size()-1;
        int n = inorder.size();
        if (start > end) {
            return nullptr;
        }

        int curr = postorder[idx];
        idx--;
        TreeNode* node = new TreeNode(curr);

        if (start == end) {
            return node;
        }

        int pos = search(inorder, start, end, curr);
        node->right = build(postorder, inorder, pos + 1, end);
        node->left = build(postorder, inorder, start, pos - 1);
        return node;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        idx = 0;
        return build(preorder, inorder, 0, preorder.size() - 1);
    }