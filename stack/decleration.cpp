// stores a list of items in which an item can be added to or removed from the list only at one end.
// Stack works on LIFO(Last In First Out) principle.


#include<iostream>
using namespace std;

int n = 100;

class stack{
    int* arr;
    int top;

    public:
    stack(){
        arr = new int[n];
        top = -1;
    }

    void push(int x){

        if(top == n-1){
            cout << "Stack overflow" << endl;
            return;
        }
        
        top++;
        arr[top] = x;

    }

    void pop(){
        
        if(top == -1){
            cout << "Stack is empty" << endl;
            return;
        }

        top--;
    }

    int Top(){

        if(top == -1){
            cout << "Stack is empty" << endl;
            return -1;
        }

        return arr[top];
    }

    bool empty(){
        return top == -1;
    }
};

int main(){

    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << st.Top() << endl;
    st.pop();
    cout << st.Top() << endl;
    cout << st.empty() << endl;


}

