#include<iostream>
using namespace std;

int power_of_2(int n){
    return (n && !(n & (n-1)));
}

int main(){
    cout << power_of_2(8) << endl;


    return 0;
}

