#include<iostream>
#include<queue>
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

int sum_at_kth_level(node* root, int k){
    if(root == NULL){
        return 0;
    }
    
    int sum = 0;

    queue<node*> q;
    q.push(root);
    q.push(NULL);

    int i = 0;


    while(!q.empty()){
        node *front = q.front();
        q.pop();
        if(front != NULL){
            if(i == k){
                sum += front->data;
            }
            if(front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
        }
        else if(!q.empty()){
            q.push(NULL);
            i++;
        }
        
        
        
    }
    return sum;

}

int main(){

    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);

    cout << sum_at_kth_level(root, 2) << endl;


}

