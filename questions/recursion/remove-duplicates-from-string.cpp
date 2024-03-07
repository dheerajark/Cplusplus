#include<iostream>
using namespace std;

string remove_duplicate(string str){
    if(str.length() == 0){
        return "";
    }
    char ch = str[0];
    string rest_of_string = str.substr(1);
    string ans = remove_duplicate(rest_of_string);
    if(ch == ans[0]){
        return ans;
    }
    else{
        return (ch+ans);
    }

}

int main(){

    cout << remove_duplicate("dhfasssfeussaaa") << endl;
    return 0;

}

