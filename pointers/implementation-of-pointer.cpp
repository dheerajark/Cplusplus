// Passing pointers to function.
#include<iostream>
using namespace std;

//pass by value
void increament1(int a){
    a++;
}

// Pass by reference
void increament2(int *b){
    (*b)++;
}

int main(){
    int a = 2;

    // Pass by value;
    increament1(a);
    cout << a << endl;

    // Pass by reference;
    int b = 2;
    int *bptr = &b;
    increament2(bptr);
    cout << b << endl;



    return 0;
}

