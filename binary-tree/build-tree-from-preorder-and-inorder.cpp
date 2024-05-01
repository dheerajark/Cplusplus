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

struct node* buildtree(int preorder[], int inorder[], int start, int end){
    static int idx = 0;

    if(start > end){
        return NULL;
    }

    int curr = preorder[idx];
    idx++;
    node* build_node = new node(curr);

    if(start == end){
        return build_node;
    }

    int pos = search(inorder, start, end, curr);
    build_node->left = buildtree(preorder, inorder, start, pos - 1);
    build_node->right = buildtree(preorder, inorder, pos + 1, end);

    return build_node;

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
    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};

    node* res_node = buildtree(preorder, inorder, 0, 4);
    print_inorder(res_node);


    return 0;
}

