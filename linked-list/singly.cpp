#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

// Insert at tail;

void insert_at_tail(node* &head, int val){

    node* n = new node(val);
    
    if(head == NULL){
        head = n;
        return;
    }

    node* curr = head;
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = n;

}

// Insert at first.

void insert_at_first(node* &head, int val){
    node* n = new node(val);
    node* temp = head;
    head = n;
    head->next = temp;
}

void delete_at_head(node* head){}


// Deletion

void deletion(node* head, int val){
    node* curr = head;
    while(curr->next->data != val){
        curr = curr->next;
    }
    node* to_delete = curr->next;
    curr->next = curr->next->next;
    delete to_delete;
    
}

void display(node* head){

    while(head){
        cout << head->data << "->";
        head = head->next;
    }
}

int main(){

    node* head = NULL;
    insert_at_tail(head, 1);
    insert_at_tail(head, 2);
    insert_at_tail(head, 3);
    insert_at_tail(head, 4);
    insert_at_first(head, 5);
    deletion(head, 3);
    display(head);


    return 0;
}

