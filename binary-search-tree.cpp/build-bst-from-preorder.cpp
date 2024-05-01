#include<iostream>
#include<climits>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};


node* build_bst_from_preorder(int preorder[], int *preorderidx, int key, int min, int max, int n){

    if(*preorderidx >= n){
        return NULL;
    }
    
    node *root = NULL;
    if(key > min && key < max){
        root = new node(key);
        *preorderidx += 1;

        if(*preorderidx < n){
            root->left = build_bst_from_preorder(preorder, preorderidx, preorder[*preorderidx], min, key, n);
        }
        if(*preorderidx < n){
            root->right = build_bst_from_preorder(preorder, preorderidx, preorder[*preorderidx], key, max, n);
        }

    }
    

    return root;
}

void print_preorder(node* root){
    if(root == NULL){
        return;
    }

    cout << root->data << " ";
    print_preorder(root->left);
    print_preorder(root->right);
}


int main(){
    int n = 6;
    int preorder[] = {7, 5, 4, 6, 8, 9};
    int preorderidx = 0;
    node* root = build_bst_from_preorder(preorder, &preorderidx, preorder[0], INT_MIN, INT_MAX, n);

    print_preorder(root);


    return 0;
    
}