#include<iostream>
using namespace std;

int main(){
    int n = 10;
    int total = 0;
    for(int i = 1; i <= n; i++){
        total += i;
    }
    cout << total << endl;
    // cout << (n*n + n)/2 << endl;
    return 0;
}

