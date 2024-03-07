#include<iostream>
using namespace std;

int common_divisior(int a, int b){
    while(b != 0){
        int rem = a % b;
        a = b;
        b = rem;
    }

    return a;
}

int main(){

    cout << common_divisior(42, 24);

    return 0;

}

