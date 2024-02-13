#include<iostream>
using namespace std;

int main(){
    int n = 8;
    int arr[n] = {1, 0, 2, 0, 7, 3, 1, 0};

    int curr = 0;
    int mx = -1;
    int j = 0;
    while(j < n){
        if(mx < arr[j] && mx < arr[j + 1]){
            curr++;
            mx = arr[j];
        }
        j++;
    }
    cout << curr << endl;


    return 0;
}

