// Balanced Height Tree: For each node, the difference between the heights of the left subtree and right subtree <= 1.

#include<iostream>
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

int height(node* root){
    
    if(root == NULL){
        return 0;
    }

    return max(height(root->left), height(root->right)) + 1;
}

bool is_balanced(node* root){

    if(root == NULL){
        return true;
    }

    if(!is_balanced(root->left)){
        return false;
    }
    if(!is_balanced(root->right)){
        return false;
    }

    int lh = height(root->left);
    int rh = height(root->right);
    if(abs(lh - rh) <= 1){
        return true;
    }else{
        return false;
    }
}

int main(){

    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    cout << is_balanced(root) << endl;

}

