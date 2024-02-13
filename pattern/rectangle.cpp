#include<iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 4;
    for(int counter = 1; counter <= a; counter++){
        for(int counter = 1; counter <= b; counter++){
            cout << "* ";
        }
        cout << endl;
    }
}

