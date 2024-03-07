#include<iostream>
using namespace std;

void total_subset(int arr[], int n){
    for(int i = 0; i < (1<<n); i++){
        for(int j = 0; j < n; j++){
            if(i & (1<<j)){
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}

int main(){
    int n = 3;
    int arr[n] = {1, 2, 3};
    total_subset(arr, n);


    return 0;

}

