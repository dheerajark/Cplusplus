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

int height_of_binary(node* root){

    if(root == NULL){
        return 0;
    }

    

    int left_height = height_of_binary(root->left);
    int right_height = height_of_binary(root->right);
    return max(0, 0) + 1;
}

int main(){

    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    cout << height_of_binary(root) << endl;

    return 0;

}

