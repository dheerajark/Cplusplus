// create vector of int type to store "path from the root element", and lastly by iterating over vector we can find the "LCA(Lowest Common Ancestor)".

#include<iostream>
#include<vector>
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

bool getnode(node* root, int key, vector<int> &path){
    if(root == NULL){
        return false;
    }
    path.push_back(root->data);
    if(root->data == key){
        return true;
    }

    if(getnode(root->left, key, path) || getnode(root->right, key, path)){
        return true;
    }

    path.pop_back();
    return false;
}

int lca(node* root, int n1, int n2){
    vector<int> path1;
    vector<int> path2;

    if(!getnode(root, n1, path1) || !getnode(root, n2, path2)){
        return -1;
    }

    int pc;    // PathChange
    for(pc = 0; pc < path1.size() && pc < path2.size(); pc++){
        if(path1[pc] != path2[pc]){
            break;
        }
    }
    return path1[pc-1];
}

node* lca2(node* root, int n1, int n2){
    
    if(root == NULL){
        return NULL;
    }
    
    if(root->data == n1 || root->data == n2){
        return root;
    }

    node* left = lca2(root->left, n1, n2);
    node* right = lca2(root->right, n1, n2);

    if(left && right){
        return root;
    }
    else if(left != NULL){
        return left;
    }
    else{
        return right;
    }

}

int main(){

    node* root = new node(1);
    root->left = new node(2);
    root->left->left = new node(3);
    root->right = new node(4);
    root->right->left = new node(5);
    root->right->left->left = new node(6);
    root->right->right = new node(7);

    cout << lca(root, 6, 7) << endl;    // path1 = {1, 4, 5, 6}; path2 = {1, 4, 7};

    node* res = lca2(root, 6, 7);
    cout << res->data << endl;
    
    return 0;

}

