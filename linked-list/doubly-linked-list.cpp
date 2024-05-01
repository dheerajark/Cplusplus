#include<iostream>
using namespace std;

class node{
    public:
    node* previous;
    int data;
    node* next;

    node(int val){
        previous = NULL;
        data = val;
        next = NULL;
    }
};

void insert_at_head(node* &head, int val){

    node* n = new node(val);
    n->next = head;
    if(head != NULL){
        head->previous = n;
    }
    head = n;

}

void insert_at_tail(node* &head, int val){
    node* n = new node(val);
    
    if(head == NULL){
        insert_at_head(head, val);
        return;
    }
    
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = n;
    n->previous = temp;
}

void display(node* head){
    node* curr = head;
    while(curr){
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << "NULL" << endl;
}

int main(){

    node* head = NULL;
    insert_at_tail(head, 1);
    insert_at_tail(head, 2);
    insert_at_tail(head, 3);
    insert_at_tail(head, 4);
    display(head);

}

