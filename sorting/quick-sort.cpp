#include<iostream>
using namespace std;

void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(int arr[], int l, int r){

    int pivot = arr[r];

    int i = l - 1;

    for(int j = l; j < r; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr, i , j);
        }
    }
    swap(arr, i+1, r);
    return i + 1;
}

void quick_Sort(int arr[], int l, int r){
    if(l < r){
        int pi = partition(arr, l, r);

        quick_Sort(arr, l, pi-1);
        quick_Sort(arr, pi+1, r);
    }
}

int main(){

    int n = 5;
    int arr[n] = {3, 2, 5, 1, 4};
    quick_Sort(arr, 0, 4);


    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

}

