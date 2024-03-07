#include<iostream>
using namespace std;

bool get_bit(int n, int pos){
    return (n & (1<<pos)) != 0;
}

int set_bit(int n, int pos){
    return (n | (1<<pos));
}

int unique_number(int arr[], int n){

    int result = 0;
    for(int i = 0; i < 64; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            if(get_bit(arr[j], i)){
                sum++;
            }
        }
        if(sum % 3 != 0){
            result = set_bit(result, i);
        }
    }
    return result;
}

int main(){
    int n = 7;
    int arr[7] = {1, 2, 1, 2, 1, 2, 3};
    cout << unique_number(arr, n) << endl;

    return 0;

}

