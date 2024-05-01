#include<iostream>
using namespace std;

int main(){

    int *arr = new int[3];
    for(int i = 0; i < 3; i++){
        cin >> arr[i] ;
    }cout << endl;

    for(int i = 0; i < 3; i++){
        cout << *arr << " ";
        // arr++;
    }cout << endl;

    // int a = 3;
    // int *aptr = &a;
    // cout << *aptr << endl;
    



    return 0;
}

