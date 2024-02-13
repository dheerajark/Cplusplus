#include<iostream>
using namespace std;

int main(){
    cout<< "Enter number to check prime or not.\n";
    int number;
    cin >> number;

    bool flag = 0;

    for(int i = 2; i < number; i++){
        if(number % i == 0){
            flag = 1;
            cout<< "It is not a prime number.";
            break;
        }
    }
    if (flag == 0){
        cout << "It's prime number.";
    }

    return 0;

}

