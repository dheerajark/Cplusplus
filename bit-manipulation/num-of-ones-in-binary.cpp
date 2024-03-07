#include<iostream>
using namespace std;

int num_of_ones(int n){
    int curr = 0;
    while(n){
        // if number of ones in n is "n" the in n-1 the number of one is "n-1"
        n = (n & n-1);
        curr++;
    }
    return curr;
}

int main(){
    cout << num_of_ones(23) << endl;

    return 0;
}

