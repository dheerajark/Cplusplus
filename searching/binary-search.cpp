#include<iostream>
using namespace std;

int binary_search(int arr[], int n, int target){
    int low = 0;
    int high = n;
    for(int i=0; i<n; i++){
        int mid = (low + high) / 2;
        if(target == arr[mid]){
            return mid;
        }
        else if(target > arr[mid]){
            low = mid + 1;
        }
        else if(target < arr[mid]){
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};

    cout << binary_search(arr, n, 5) << endl;

}

