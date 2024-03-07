#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "djhfakjhssfesadfs";

    int frequency = 0;
    int k = 0;
    for(int i = 0; i < str.size(); i++){
        int current = 0;
        for(int j = i; j < str.size(); j++){
            if(str[i] == str[j]){
                current += 1;
                k = i;
                frequency = max(frequency, current);
            }
        }
    }

    cout << frequency << " " << str[k] << endl;

    return 0;
}

