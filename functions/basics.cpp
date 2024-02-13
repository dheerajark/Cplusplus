#include<iostream>
using namespace std;

void print(int num) {
    cout << num << "\n";
    return;
}

int add(int a, int b){
    int sum = a + b;
    print(a);
    print(b);
    return sum;
}

int main(){
    int a = 5;
    int b = 6;
    int result;
    result = add(a, b);
    cout << result;
    return 0;
}

