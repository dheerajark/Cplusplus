#include<iostream>
using namespace std;

int main(){
    int n = 7;
    char arr[n + 1] = "racecar";

    int i = 0;
    bool flag = 1;
    while(arr[i] != '\0'){
        if(arr[i] != arr[n - 1 - i]){
            flag = 0;
            break;
        }
        i++;
    }

    if(flag){
        cout << "Word is palindrome." << endl;
    }
    else{
        cout << "Word is not palindrome." << endl;
    }

    return 0;
    
}

