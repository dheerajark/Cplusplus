#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n = 5;
    int arr[n] = {-1, 2, -3, 7, -4};

    int current_sum = 0;
    int max_sum = INT_MIN;
    for(int i = 0; i < n; i++){
        current_sum += arr[i];
        if(current_sum < 0){
            current_sum = 0;
        }
        max_sum = max(max_sum, current_sum);
    }
    cout << max_sum << endl;

    return 0;

}

