#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void sliding_window_max(int* arr, int n, int k){
    vector<int> ans;
    multiset<int, greater<int>> s;
    for(int i = 0; i < k; i++){
        s.insert(arr[i]);
    }
    for(int i = k; i <= n; i++){
        ans.push_back(*s.begin());
        s.erase(s.lower_bound(arr[i - k]));
        s.insert(arr[i]);
    }
    
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }cout << endl;
    
}

int main(){
    int n = 8;
    int *arr = new int[n]{1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;

    sliding_window_max(arr, n, k);
    return 0;
}

