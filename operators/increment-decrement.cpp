#include<iostream>
using namespace std;

// Prefix form:
// ++variable: Increments the value of variable by 1 and then uses the updated value.
// --variable: Decrements the value of variable by 1 and then uses the updated value.

// Postfix form:
// variable++: Uses the current value of variable and then increments it by 1.
// variable--: Uses the current value of variable and then decrements it by 1.

int main() {
    int a = 10;
    int b;

    b = ++a;
    cout << a << "\n" << b;
    return 0;
}

