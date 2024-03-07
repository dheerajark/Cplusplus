#include<iostream>
using namespace std;

//Get bit;
int get_bit(int n, int pos){
    return ((n & (1<<pos)) != 0);
}

// Set bit;
int set_bit(int n, int pos){
    return (n | (1<<pos));
}

// Clear bit;
int clear_bit(int n, int pos){
    return (n & (~(1<<pos)));
}

// Update bit;
int update_bit(int n, int pos, int value){
    int mask = ~(1<<pos);
    n = n & mask;
    return  (n | (value<<pos));

}



int main(){

    // Get bit. We have to find the "bit" in a given position.
    int n = 5;
    int pos = 2;
    cout << get_bit(n, pos) << endl;

    // Set bit. we have to set a bit to "1" at a given position.
    cout << set_bit(n, pos) << endl;

    // Clear bit. We have to set bit to "0" at a given position.
    cout << clear_bit(n, pos) << endl;

    // Update bit. set a bit "0" or "1" at a give position;
    cout << update_bit(n, pos, 1) << endl;




}

