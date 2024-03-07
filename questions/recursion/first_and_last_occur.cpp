#include<iostream>
using namespace std;

int first_occur(int arr[], int n, int i, int key){

    if(i == n){
        return -1;
    }

    
    if(arr[i] == key){
        return i;
    }
    return first_occur(arr, n, i+1, key);
}

int last_occur(int arr[], int n, int i, int key){
    if(i == n){
        return -1;
    }
    int rest_array = last_occur(arr, n, i+1, key);
    if(rest_array != -1){
        return rest_array;
    }
    if(arr[i] == key){
        return i;
    }
    return -1;

}

int main(){
    int n = 7;
    int arr[n] = {4, 2, 1, 2, 5, 2, 7};
    cout << first_occur(arr, n, 0, 2) << endl;
    cout << last_occur(arr, n, 0, 2) << endl;
    
    return 0;
}

