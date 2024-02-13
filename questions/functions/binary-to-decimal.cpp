#include<iostream>
using namespace std;

int binary_decimal(int n){
    int ans = 0;
    int x = 1;
    while(n > 0){
        int y = n % 10;
        ans += x*y;
        x *= 2;
        n /= 10;
    }
    return ans;
}

int main(){
    int n = 110;

    cout << binary_decimal(n) << endl;

    return 0;
}

