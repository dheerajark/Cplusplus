#include<iostream>
using namespace std;

int main(){
    int arr[3] = {10, 20, 30};
    
    // it prints only the first index
    cout << *arr << endl;   // "*" means dereferencing


    int *arrptr = arr;
    for(int i = 0; i < 3; i++){
        cout << *arrptr << ' ';
        arrptr++;
    }
    cout << endl;

    // Get value by index using pointer;
    for(int i = 0; i < 3; i++){
        cout << *(arr + i) << " ";
    }
    cout << endl;


    // pointer to heap(arrays).
    int a = 10;
    int *b = new int[3];
    for(int i = 0; i < 3; i++){
        cin >> b[i] ;
    }

    for(int i = 0; i < 3; i++){
        cout << *b << " ";
        b++;
    }cout << endl;


    
    return 0;
}

