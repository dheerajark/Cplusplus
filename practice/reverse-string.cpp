#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "dkfjajhdfn";
    int n = str.size();
    cout << n << endl;
    for(int i = 0; i < n; i++){
        char temp = str[i];
        str[i] = str[str.size()-1-i];
        str[str.size()-1-i] = temp;
    }

    cout << str << endl;

    return 0;

}

