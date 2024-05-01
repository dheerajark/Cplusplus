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

int calc_height(node* root){

    if(root == NULL){
        return 0;
    }

    return max(calc_height(root->left), calc_height(root->right)) + 1;
}

int clac_diameter(node* root){

    if(root == NULL){
        return 0;
    }

    int lheiht = calc_height(root->left);
    int rheight = calc_height(root->right);
    int diameter = lheiht + rheight + 1;

    int ldiameter = clac_diameter(root->left);
    int rdiameter = clac_diameter(root->left);
    return max(diameter, max(ldiameter, rdiameter));
}

int main(){

    node* root = new node(1);
    root->left = new node(2);
    root->left->left = new node(3);
    root->left->left->left = new node(4);
    root->left->left->left->right = new node(5);

    cout << clac_diameter(root) << endl;

    return 0;

}

