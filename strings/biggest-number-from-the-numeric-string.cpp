#include<iostream>
#include<string>
using namespace std;

int main(){
    string str = "234521";
    for(int i = 0; i < str.size(); i++){
        for(int j = i; j < str.size(); j++){
            if(str[j+1] > str[i]){
                int temp = str[i];
                str[i] = str[j+1];
                str[j+1] = temp;
            }
        }
    }
    cout << str << " ";


    return 0;
}

