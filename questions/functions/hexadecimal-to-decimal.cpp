#include<bits/stdc++.h>
using namespace std;

int hexadecimal_to_decimal(string n){
    int ans = 0;
    int x = 1;

    int length = n.size();
    for(int i = length-1; i >= 0; i--){
        if(n[i] >= '0' && n[i] <= '9'){
            ans += x * (n[i] - '0');
        }
        else if(n[i] >= 'A' && n[i] <= 'F'){
            ans += x * (n[i] - 'A' + 10);
        }
        x *= 16;
    }
    return ans;
}


int main(){
    string n = "1CF";

    cout << hexadecimal_to_decimal(n) << endl;

    return 0;
}

