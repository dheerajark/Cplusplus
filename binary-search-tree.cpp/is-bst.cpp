#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        data =  val;
        left = NULL;
        right =NULL;
    }
};

bool is_bst(node* root, node* min, node* max){

    if(root == NULL){
        return true;
    }

    if(min != NULL && root->data <= min->data){
        return false;
    }
    if(max != NULL && root->data >= max->data){
        return false;
    }
    bool left_valid = is_bst(root->left, min, root);
    bool right_valid = is_bst(root->right, root, max);
    return left_valid and right_valid;

}

int main(){

    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    cout << is_bst(root, NULL, NULL) << endl;

    return 0;

}

