#include<iostream>
using namespace std;

void replace_pi(string str){
    if(str.length() == 0){     //base case
        return;
    }
    if(str[0] == 'p' && str[1] == 'i'){
        cout << "3.14";
        string rest_of_string = str.substr(2);
        replace_pi(rest_of_string);
    }
    else{
        cout << str[0];
        string ros = str.substr(1);
        replace_pi(ros);
    }
}

int main(){
    string str = "pipppippi";
    replace_pi(str);
    
    return 0;
}

