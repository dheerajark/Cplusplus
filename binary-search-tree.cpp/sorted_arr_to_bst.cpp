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

node* build_bst_from_sorted_arr(int arr[], int start, int end){

    if(start > end){
        return NULL;
    }

    int mid = (start + end) / 2;
    node* root = new node(arr[mid]);
    root->left = build_bst_from_sorted_arr(arr, start, mid-1);
    root->right = build_bst_from_sorted_arr(arr, mid + 1, end);

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

    int arr[] = {1, 2, 3, 4, 5};
    node* root = build_bst_from_sorted_arr(arr, 0, 4);
    print_preorder(root);
    

    return 0;
}



