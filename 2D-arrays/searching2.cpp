#include<iostream>
using namespace std;

int main(){
    int n = 3;
    int m = 3;
    int arr[n][m] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int target = 5;



    int r = 0;
    int c = m-1;
    bool flag = 0;
    while(r < n && c >= 0){
        if(arr[r][c] == target){
            flag = 1;
            cout << "Element at position " << r << " " << c << endl;
            break;
        }
        else if(arr[r][c] > target){
            c--;
        }
        else{
            r++;
        }
    }
    
    if(flag){
        cout << "Element found";
    }
    else{
        cout << "Element not found";
    }

}

