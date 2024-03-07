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

void insert_at_tail(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void make_cycle(node* head, int pos){
    node* temp = head;
    node* startnode;
    int count = 1;
    while(temp->next != NULL){
        
        if(count == pos){
            startnode = temp;
        }
        
        temp = temp->next;
        count++;
    }
    temp->next = startnode;
}

bool cycle_detection(node* head){
    node* slow = head;
    node* fast = head;

    while(fast != NULL & fast->next != NULL){

        slow = head->next;
        fast = head->next->next;
        
        if(slow == fast){
            return true;
        }
    }
    return false;
}

void display(node* head){
    
    while(head){
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL" << endl;
}

int main(){

    node* head = NULL;
    insert_at_tail(head, 1);
    insert_at_tail(head, 2);
    insert_at_tail(head, 3);
    insert_at_tail(head, 4);
    insert_at_tail(head, 5);
    insert_at_tail(head, 6);
    insert_at_tail(head, 7);
    make_cycle(head, 3);
    cycle_detection(head);

    // display(head);
    


}

