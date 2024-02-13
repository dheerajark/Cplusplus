#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[n] = {2, 5, 0, 1, 4};

    const int N = 1e6+2;
    bool idx[N];
    for(int i = 0; i < N; i++){
        idx[i] = false;
    }

    int j = 0;
    while(j < n){
        if(arr[j] < 0){
            j++;
            continue;
        }
        else{
            idx[arr[j]] = true;
            j++;
        }
    }
    int k = 0;
    while(k < N){
        if(idx[k] == false){
            cout << k << endl;
            break;
        }
    }

}

