#include<iostream>
using namespace std;

int linear_search(int arr[], int n, int target){
    for(int i=0; i<n; i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}


int main(){
    int n = 5;

    int arr[n] = {1, 3, 6, 2, 5};
    cout<<linear_search(arr, n, 2);
    return 0;
}

