#include<iostream>
using namespace std;

int main(){
    int n = 8;
    int arr[n] = {3, 5, 6, 9, 1, 2, 7, 8};

    int inv = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; i < n; j++){
            if(arr[i] > arr[j]){
                inv++;
            }
        }
    }
    cout << inv << endl;

    return 0;
}

