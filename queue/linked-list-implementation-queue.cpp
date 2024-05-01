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

class queue{
    node* front;
    node* back;

    public:
    queue(){
        front = NULL;
        back = NULL;
    }

    void enqueue(int x){

        node* n = new node(x);

        if(front == NULL){
            // back->next = n;
            back = n;
            front = n;
            return;
        }
        
        back->next = n;
        back = n;
    }

    void dequeue(){
        node* to_delete = front;

        if(front == NULL){
            cout << "Queue is empty" << endl;
            return;
        }
        front = front->next;

        delete to_delete;
    }

    int peek(){
        
        if(front == NULL){
            return -1;
        }
        return front->data;

    }

    bool empty(){
        if(front == NULL){
            return true;
        }
        return false;
    }

};

int main(){

    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    q.dequeue();
    cout << q.peek() << endl;
    cout << q.empty() << endl;



    return 0;
}

