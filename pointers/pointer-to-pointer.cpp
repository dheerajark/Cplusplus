#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *aptr;
    aptr = &a;

    cout << *aptr << endl; // It prints the value of "a";

    int **qptr = &aptr;   // It stores the address of aptr

    cout << *qptr << endl;    // One time dereferencing it gives the value of aptr(which is an address of "a")
    cout << **qptr << endl;   // two times dereferencing it gives the value of "a"(which is the actual value of "a"(means "10"));


    return 0;
}

