#include<iostream>
using namespace std;


void selection_Sort(int arr[], int n){
    for(int i=0; i < n-1; i++){
        // int *min_idx = new int;
        // *min_idx = i;
        int min_idx = i;
        for(int j=i+1; j < n; j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp; 
    }
}


int main(){
    int n = 5;
    int arr[n] = {2, 5, 1, 4, 3};


    selection_Sort(arr, n);
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


