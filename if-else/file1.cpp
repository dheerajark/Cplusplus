#include<iostream>
using namespace std;

int main(){
    int year;
    cin>> year;

    if (year % 4 == 0) {
        if (year % 100 == 0){
            if (year % 400 == 0){
                cout<< year << "is a Leap year";
            }
            else {
                cout << year << "not a Leap year";
            }
        }
        else {
            cout << year << "is a Leap year";
        }
    }
    else {
        cout << year << "is not a Leap year";
    }

    return 0;
}
