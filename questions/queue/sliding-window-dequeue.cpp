#include<iostream>
#include<vector>
#include<set>
#include<bits/stdc++.h>
#include<deque>
using namespace std;

int main(){
    int n = 7;
    int k = 3;

    vector<int> a(n);
    for(auto &i: a){
        cin >> i;
    }

    multiset<int, greater<int>> s;
    vector<int> ans;
    for(int i = 0; i < k; i++){
        s.insert(a[i]);
    }
    ans.push_back(*s.begin());
    for(int i = k; i < n; i++){
        s.erase(s.lower_bound(a[i-k]));
        s.insert(a[i]);
        ans.push_back(*s.begin());
    }

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }cout << endl;

    return 0;
}

