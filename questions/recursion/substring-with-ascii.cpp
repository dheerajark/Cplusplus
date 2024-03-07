#include<iostream>
using namespace std;

void subsequence_with_ascii(string str, string ans){
    
    if(str.length() == 0){
        cout << ans << endl;
        return;
    }
    char ch = str[0];
    int code = ch;
    string ros = str.substr(1);
    subsequence_with_ascii(ros, ans);
    subsequence_with_ascii(ros, ans+ch);
    subsequence_with_ascii(ros, to_string(code));

}

int main(){

    subsequence_with_ascii("AB", "");

    return 0;

}

