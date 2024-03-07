#include<iostream>
using namespace std;

bool total_prime_no(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
    
}

int main(){

    int a = 3, b = 10000;

    for(int i = a; i <= b; i++){
        if(total_prime_no(i)){
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;

}

