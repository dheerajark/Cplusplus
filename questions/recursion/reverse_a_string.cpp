#include<iostream>
using namespace std;

void reverse_string(string str){
    if(str.length() == 0){
        return;
    }
    string rest_string = str.substr(1);
    reverse_string(rest_string);
    cout << str[0];
}

int main(){
    string str = "dfjshsak";
    reverse_string(str);


    return 0;
}

