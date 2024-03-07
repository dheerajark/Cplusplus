#include<iostream>
using namespace std;

string move_x_to_end(string str){
    if(str.length() == 0){
        return "";
    }

    string ch_x = "";
    char ch = str[0];
    string rest_str = str.substr(1);
    string ans = move_x_to_end(rest_str);
    if(ch != 'x'){
        return ans;
    }
    else{
        return ans + ch_x;
    }

}

int main(){

    cout << move_x_to_end("xsdxxxsdrefxxxieu") << endl;

    return 0;

}


