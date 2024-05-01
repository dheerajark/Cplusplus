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

node* insert_bst(node* root, int val){
    if(root == NULL){
        return new node(val);
    }
    if(root->data > val){
        root->left = insert_bst(root->left, val);
    }
    else{
        root->right = insert_bst(root->right, val);
    }

    return root;
}

node* inorder_succ(node* root){
    node* curr = root;

    while(curr && curr->left != NULL){
        curr = curr->left;
    }
    return curr;

}

node* deletion_in_bst(node* root, int val){
    if(root == NULL){
        return root;
    }
    if(root->data > val){
        root->left = deletion_in_bst(root->left, val);
    }
    else if(root->data < val){
        root->right = deletion_in_bst(root->right, val);
    }

    else{
        if(root->left == NULL){
            node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            node* temp = root->right;
            free(root);
            return temp;
        }
        // case 3
        node* temp = inorder_succ(root->right);
        root->data = temp->data;
        // root->right = deletion_in_bst(root->right, temp->key);
    }
    return root;

}

void print_inorder(node* root){
    if(root == NULL){
        return;
    }

    print_inorder(root->left);
    cout << root->data << " ";
    print_inorder(root->right);
}

int main(){

    node* root = NULL;
    root = insert_bst(root, 5);
    insert_bst(root, 1);
    insert_bst(root, 3);
    insert_bst(root, 4);
    insert_bst(root, 2);
    insert_bst(root, 7);

    print_inorder(root);
    cout << endl;





    return 0;

}

