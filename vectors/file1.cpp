#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    

    // print
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }cout << endl;

    vector<int> :: iterator it;
    for(it = v.begin(); it!=v.end(); it++){
        cout << *it << " ";
    }cout << endl;

    for(auto element:v){
        cout << element << " ";
    }cout << endl;

    // popback
    v.pop_back();  // 1 2

    vector<int> v2(3, 50);
    for(auto element:v){
        cout << element << " ";
    }cout << endl;

    for(auto element:v2){
        cout << element << " ";
    }cout << endl; // 50 50 50 

    // swap
    swap(v, v2);
    for(auto element:v){
        cout << element << " ";
    }cout << endl;

    for(auto element:v2){
        cout << element << " ";
    }cout << endl;

    // sort
    sort(v.begin(), v.end());








    



    return 0;
}

