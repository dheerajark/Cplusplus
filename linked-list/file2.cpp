#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node *next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void append(node* &head, int val){

    node* n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;
    while(temp->next){
        temp = temp->next;
    }
    temp->next = n;

}

void insert_at_head(node* &head, int val){
    node* n = new node(val);
    node* temp = head;
    head = n;
    head->next = temp;
}

bool search(node* head, int item){
    node* curr = head;
    while(curr){
        if(curr->data == item){
            cout << "Item found" << endl;
        }
        curr = curr->next;
    }
}

void deletion(node* head, int pos){
    node* curr = head;
    int i = 0;
    while(i <= pos-3){
        curr = curr->next;
        i++;
    }
    node* next_next_element = curr->next->next;
    curr->next = NULL;
    curr->next = next_next_element;
    
}

void display(node* head){

    node* curr = head;
    while(curr){
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << endl;
}

int main(){

    node* head = NULL;
    append(head, 1);
    append(head, 2);
    append(head, 3);
    append(head, 5);
    insert_at_head(head, 4);
    // search(head, 3);
    deletion(head, 2);

    display(head);
    


    return 0;
}



