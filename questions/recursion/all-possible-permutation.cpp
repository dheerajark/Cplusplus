#include<iostream>
using namespace std;

void all_permutation(string str, string ans){
    if(str.length() == 0){
        cout << ans << endl;
        return;
    }
    for(int i = 0; i < str.length(); i++){
        char ch = str[i];
        string ros = str.substr(0, i) + str.substr(i+1);
        all_permutation(ros, ans+ch);

    }
}

int main(){

    all_permutation("ABC", "");

    return 0;

}

