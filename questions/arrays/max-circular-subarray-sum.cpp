// By using reverse sign, kadane's law (for finding element which is/are not contributing) and lastly subtract from total.
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n = 7;
    int arr[n] = {4, -4, 6, -6, 10, -11, 12};

    int total = 0;
    for(int i = 0; i < n; i++){
        total += arr[i];
    }
    cout << total << endl;

    for(int i = 0; i < n; i++){
            arr[i] *= -1;
    }


    // for(int i = 0; i < n; i++){
    //     cout << arr[i];
    // }

    // cout << endl;

    int current_sum = 0;
    int max_sum = INT_MIN;
    for(int i = 0; i < n; i++){
        current_sum += arr[i];
        if(current_sum < 0){
            current_sum = 0;
        }
        max_sum = max(max_sum, current_sum);
        // cout << max_sum << endl;

    }
    max_sum *= -1;
    cout << max_sum << endl;

    cout << total - max_sum << endl;

    return 0;
}

