#include<iostream>
using namespace std;

void num_upto_n(int n){

    if(n == 0){
        return;
    }
    num_upto_n(n-1);
    cout << n << endl;

    
}

int main(){

    num_upto_n(10);

    return 0;


}

