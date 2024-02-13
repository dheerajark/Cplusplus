#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 8;
    int arr[n] = {1, 2, 4, 6, 4, 2, 3, 8};

    const int N = 1e6+2;
    int idx[N];
    for(int i = 0; i < N; i++){
        idx[i] = -1;
    }

    int minidx = INT_MAX;
    for(int i = 0; i < n; i++){
        if(idx[arr[i]] != -1){
            minidx = min(minidx, idx[arr[i]]);
        }
        else{
            idx[arr[i]] = i;
        }
    }
    if(minidx == INT_MAX){
        cout << "-1" << endl;
    }
    else{
        cout << minidx + 1 << endl;
    }
    return 0;
}

