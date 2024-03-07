#include<iostream>
using namespace std;

int prime_no(int n){
    bool flag = 1;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            flag = 0;
        }
    }

    if(flag){
        cout << "It is a Prime number";
    }
    else{
        cout << "It is not a Prime number";
    }
}

int main(){
    
    prime_no(8);

    return 0;

}

