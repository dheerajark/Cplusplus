#include<iostream>
using namespace std;

void insertion_sort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 & key < arr[j]){
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j+1] = key;
    } 
}

int main(){
    int n = 5;
    int arr[n] = {2, 4, 1, 5, 3};

    insertion_sort(arr, n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    

    return 0;
}

