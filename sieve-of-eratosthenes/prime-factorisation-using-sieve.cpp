#include<iostream>
using namespace std;

void smallest_prime_factor(int n){
    // int num = n;
    int arr[100] = {0};
    for(int i = 2; i < n; i++){
        arr[i] = i;
    }

    for(int i = 2; i < n; i++){
        if(arr[i] == i){
            for(int j = i*i; j < n; j += i){
                arr[j] = i;
            }
        }
    }
    while(n != 1){
        cout << arr[n] << " ";
        n = n / arr[n];
    }
    // cout << endl;
}

int main(){

    smallest_prime_factor(20);
    


    return 0;

}

