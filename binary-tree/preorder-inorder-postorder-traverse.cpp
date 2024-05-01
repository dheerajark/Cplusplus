#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;

    node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void preorder_traverse(struct node* root){

    if(root == NULL){
        return;
    }

    cout << root->data << " ";
    preorder_traverse(root->left);
    preorder_traverse(root->right);
}

void inorder_traverse(struct node* root){

    if(root == NULL){
        return;
    }

    inorder_traverse(root->left);
    cout << root->data << " ";
    inorder_traverse(root->right);

}

void postorder_traverse(struct node* root){

    if(root == NULL){
        return;
    }

    postorder_traverse(root->left);
    postorder_traverse(root->right);
    cout << root->data << " ";
}


int main(){

    struct node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);


    // View:
    //      1
    //     / \
    //    2   3
    //   /
    // NULL

    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);


        // View:
        //        1
        //       / \
        //      2   3
        //     / | | \
        //    4  5 6  7

    preorder_traverse(root);
    cout << endl;
    inorder_traverse(root);
    cout << endl;
    postorder_traverse(root);

    return 0;
}

