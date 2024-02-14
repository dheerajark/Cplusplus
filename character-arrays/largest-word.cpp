#include<iostream>
using namespace std;

int main(){
    int n = 100;
    char arr[n + 1] = "Hi I am Dheeraj Kumar";

    int  i = 0;
    int largest_word = 0;
    int current_word = 0;
    int j;
    while(1){
        if(arr[i] == ' ' || arr[i] == '\0'){
            if(current_word > largest_word){
                largest_word = current_word;
                j = i - largest_word;
            }
            current_word = 0;
        }
        else{
        current_word++;
        }
        if(arr[i] == '\0'){
            break;
        }
        i++;
    }

    for(int i = 0; i < largest_word; i++){
        cout << arr[j];
        j++;
    }
    cout << endl;

    cout << largest_word << endl;

    return 0;
}


