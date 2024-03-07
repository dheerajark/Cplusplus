#include<iostream>
#include<string>
using namespace std;



int main(){

    int n = 153;

    string num_str = to_string(n);
    int total = 0;
    for(int i = 0; i < num_str.length(); i++){
        int digit = num_str[i];
        total += digit * digit * digit;
    }
    if(total == n){
        cout << "It is Armstrong number" << endl;
    }
    else{
        cout << "It is not a Armstrong number" << endl;
    }

    return 0;

}

