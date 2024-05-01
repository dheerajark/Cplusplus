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

int search(int inorder[], int start, int end, int curr){
    for(int i = start; i < end; i++){
        if(inorder[i] == curr){
            return i;
        }
    }
    return -1;
}

struct node* buildtree(int postorder[], int inorder[], int start, int end){
    
    if(start > end){
        return NULL;
    }

    static int idx = end;
    int curr = postorder[idx];
    idx--;
    node* root = new node(curr);

    if(start == end){
        return root;
    }

    int pos = search(inorder, start, end, curr);
    root->right = buildtree(postorder, inorder, pos + 1, end);
    root->left = buildtree(postorder, inorder, start, pos - 1);

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

    int postorder[] = {4, 2, 5, 3, 1};
    int inorder[] = {4, 2, 1, 5, 3};

    node* root = buildtree(postorder, inorder, 0, 4);
    print_inorder(root);




    return 0;
}

