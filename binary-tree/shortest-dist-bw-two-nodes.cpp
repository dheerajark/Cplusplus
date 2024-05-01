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

node* lca(node* root, int n1, int n2){
    
    if(root == NULL){
        return NULL;
    }

    if(root->data == n1 && root->data == n2){
        return root;
    }

    node* left = lca(root->left, n1, n2);
    node* right = lca(root->right, n1, n2);

    if(left && right){
        return root;
    }
    else if(left){
        return left;
    }
    else{
        return right;
    }
}

int find_dist(node* root, int k, int dist){
    
    if(root == NULL){
        return -1;
    }

    if(root->data == k){
        return dist;
    }
    
    int leftdist = find_dist(root->left, k, dist+1);
    if(leftdist != -1){
        return leftdist;
    }
    else{
        return find_dist(root->right, k, dist+1);
    }
}

int dist_bw_two_nodes(node* root, int n1, int n2){
    
    node* res_lca = lca(root, n1, n2);

    int d1 = find_dist(res_lca, n1, 0);
    int d2 = find_dist(res_lca, n2, 0);

    return d1 + d2;
}

int main(){

    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->right->left = new node(5);
    root->right->right = new node(6);
    root->right->left->left = new node(7);
    root->right->right->right = new node(8);

    cout << dist_bw_two_nodes(root, 7, 8) << endl;

}

