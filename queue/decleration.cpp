// Stores the list of items in which an item can be inserted at one end and removed from other end.

// Operations
// 1. Enqueue() 2. Dequeue() 3. Peek() 4. Empty()

#include<iostream>
using namespace std;

int n = 100;

class queue{
    int* arr;
    int front;
    int back;

    public:
    queue(){
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void enqueue(int x){
        if(back == n-2){
            cout << "Queue overflow" << endl;
            return;
        }
        else{
            back++;
            arr[back] = x;
        }
        
        if(front == -1){
            front++;
        }
    }

    void dequeue(){
        if(front == -1 || front > back){
            cout << "Queue is empty" << endl;
            return;
        }
        
        front++;
    }

    int peek(){
        if(front == -1 || front > back){
            cout << "queue is empty" << endl;
            return -1;
        }

        return arr[back];
    }

    bool empty(){
        if(front == -1 || front > back){
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


