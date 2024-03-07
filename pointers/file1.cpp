#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *aptr;

    aptr = &a;  // aptr store the address of "a";
    cout << aptr << endl;   // It prints the address of "a"

    
    aptr++;  // means we increase the address from 4bytes
    cout << *aptr << endl; // It prints a garbage value
    cout << aptr << endl;

    // lets take another integer b;
    int b = 7;
    int *bptr;

    bptr = &b;

    return 0;
    

}

