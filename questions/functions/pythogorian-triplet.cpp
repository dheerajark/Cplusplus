#include<iostream>
#include<climits>
using namespace std;

int main(){
    int a = 4, b = 5, c = 3;
    int max_no = max(a, max(b, c));
    int x, y;
    if(max_no == a){
        x = b;
        y = c;
    }
    else if(max_no == b){
        x = a;
        y = c;
    }
    else{
        x = a;
        y = b;
    }

    if(max_no * max_no == x*x + y*y){
        cout << "Yes it is a Pythogorian triplet";
    }
    else{
        cout << "No, it is not a pythogorian triplet" << endl;
    }

}

