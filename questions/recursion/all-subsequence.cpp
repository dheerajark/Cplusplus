#include<iostream>
using namespace std;

void all_subsequence(string str, string ans = ""){
    if(str.length() == 0){
        cout << ans << endl;
        return;
    }
    char ch = str[0];
    string ros = str.substr(1);
    all_subsequence(ros, ans);
    all_subsequence(ros, ch + ans);
}

int main(){
    all_subsequence("ABC", "");

    return 0;

}

