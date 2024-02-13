#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 5};


    for(int i = 0; i < 5; i++){
        int curr_sum = 0;
        for(int j = i; j < 5; j++){
            curr_sum += arr[j];
            cout << curr_sum << endl;
        }
    }


    return 0;
}

