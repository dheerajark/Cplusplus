#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string str = "dskjfkdsha";

    cout << 'a' - 'A' << endl;    // It give 32

    for(int i = 0; i < str.size(); i++){
        str[i] -= 32;
    }

    cout << str << endl;

    for(int i = 0; i < str.size(); i++){
        str[i] += 32;
    }

    cout << str << endl;

    transform(str.begin(), str.end(), str.begin(), ::toupper);

    return 0;
}

