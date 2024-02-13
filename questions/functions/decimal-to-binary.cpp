#include<iostream>
using namespace std;

int decimal_to_binary(int n){
    int ans = 0;
    int x = 1;
    while(x <= n){
        x *= 2;
    }
    x /= 2;
    while(x>0){
        int lastdigit = n/x;
        n -= lastdigit * x;
        x /= 2;
        ans = ans*10 + lastdigit;
    }
    return ans;
}


int main(){
    int n = 5;

    cout << decimal_to_binary(n) << endl;

    return 0;
}



