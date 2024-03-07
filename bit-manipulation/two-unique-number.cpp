#include<iostream>
using namespace std;

int set_bit(int n, int pos){
    return ((n & (1<<pos)) != 0);
}

void unique_number(int arr[], int n){
    int xorsum = 0;
    for(int i = 0; i < n; i++){
        xorsum = xorsum ^ arr[i];
    }

    int tempxor = xorsum;
    int setbit = 0;
    int pos = 0;
    while(setbit != 0){
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >> 1;
    }

    int newxor = 0;
    for(int i = 0; i < n; i++){
        if(set_bit(arr[i], (pos-1))){
            newxor = newxor ^ arr[i];
        }
    }

    cout << newxor << endl;
    cout << (newxor^tempxor) << endl;
}

int main(){
    int n = 8;
    int arr[n] = {1, 2, 3, 1, 2, 3, 5, 7};

    unique_number(arr, n);

    return 0;

}

