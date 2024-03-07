#include<iostream>
using namespace std;

bool array_sorted_or_not(int arr[], int n){

    if(n == 1){
        return true;
    }

    bool rest_array = array_sorted_or_not(arr + 1, n-1);
    if(arr[0] < arr[1] && rest_array){
        return true;
    }
    else{
        return false;
    }

}

int main(){

    int n = 7;

    int arr[n] = {1, 2, 3, 4, 5, 6, 7, 2};

    cout << array_sorted_or_not(arr, n) << endl;

    return 0;

}

