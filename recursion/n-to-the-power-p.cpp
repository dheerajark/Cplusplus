#include<iostream>
using namespace std;

int power(int n, int p){

    if(p == 0){
        return 1;
    }

    int prev_power = power(n, p-1);
    return n * prev_power;
}

int main(){

    cout << power(4, 3) << endl;
    
    return 0;

}

