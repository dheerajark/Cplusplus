// When a function  call itself to make the problem smaller.

#include<iostream>
using namespace std;

int sum(int n){
    if(n == 0){
        return 0;
    }
    int prev_sum = sum(n - 1);
    return n + prev_sum;
}

int main(){

    cout << sum(5) << endl;

    return 0;

}

