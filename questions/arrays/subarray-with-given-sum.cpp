#include<iostream>
using namespace std;

int main(){
    int n = 7;
    int arr[n] = {7, 2, 1, 5, 3, 4, 6};

    int sum = 0;
    int target = 12;
    int i = 0;
    int j = 0;
    while(i < n){
        if(sum == target){
            cout << j << " " << i - 1 << endl;
            break;
        }
        else if(sum < target){
            sum += arr[i];
            i += 1;
            continue;
        }
        else if(sum > target){
            sum -= arr[j];
            j++;
        }
    }
    return 0;

}

