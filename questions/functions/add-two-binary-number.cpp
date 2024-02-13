#include<iostream>
using namespace std;


int reverse_ans(int n){
    int ans = 0;
    while(n>0){
        int lastdigit = n % 10;
        ans = ans * 10 + lastdigit;
        n /= 10;
    }
}


int add_two_binary_number(int x, int y){
    int ans = 0;
    int previous_carry = 0;
    while(x > 0 && y > 0){
        if(x % 2 == 0 && y % 2 == 0){
            ans = ans*10 + previous_carry;
            previous_carry = 0;
        }
        else if((x % 2 == 0 && y % 2 == 1) || (x % 2 == 1 && y % 2 == 0)){
            if(previous_carry == 1){
                ans = ans * 10 + 0;
                previous_carry = 1;
            }
            else{
                ans = ans * 10 + 1;
                previous_carry = 0;
            }
        }
        else if(x % 2 == 1 && y % 2 == 1){
            ans = ans * 10 + previous_carry;
            previous_carry = 1;
        }
    }
    x /= 10;
    y /= 10;

    while(x > 0){
        if(x % 10 == 0){
            if(previous_carry == 1){
                ans = ans * 10 + previous_carry;
                previous_carry = 0;
            }
            else{
                ans = ans * 10 + 0;
                previous_carry = 0;
            }
        }
        else{
            if(previous_carry == 1){
                ans = ans * 10 + 0;
                previous_carry = 1;
            }
            else{
                ans = ans * 10 + 1;
                previous_carry = 0;
            }
        }
    }
    while(y > 0){
        if(y % 10 == 0){
            if(previous_carry == 1){
                ans = ans * 10 + previous_carry;
                previous_carry = 0;
            }
            else{
                ans = ans * 10 + 0;
                previous_carry = 0;
            }
        }
        else{
            if(previous_carry == 1){
                ans = ans * 10 + 0;
                previous_carry = 1;
            }
            else{
                ans = ans * 10 + 1;
                previous_carry = 0;
            }
        }
    }
    ans = reverse_ans(ans);
    return ans;
}


int main(){
    int x = 101;
    int y = 101;

    cout << add_two_binary_number(x, y) << endl;

    return 0; 
}

