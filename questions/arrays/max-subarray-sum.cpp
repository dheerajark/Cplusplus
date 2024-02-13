// By using cumulative sum.
#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n = 5;
    int arr[n] = {1, -4, 3, 2, 1};

    int prfix_sum[n+1];
    prfix_sum[0] = 0;
    for(int i = 1; i <= n; i++){
        prfix_sum[i] = prfix_sum[i - 1] + arr[i - 1];
    }
    for(int i = 0; i < n+1; i++){
        cout << prfix_sum[i] << ", ";
    }
    cout << endl;

    int max_sum = INT_MIN;
    for(int i = 1; i <= n; i++){
        int sum = 0;
        for(int j = 0; j < i; j++){
            sum = prfix_sum[i] - prfix_sum[j];
            max_sum = max(sum, max_sum);
        }
        // cout << sum << endl;
        
    }
    cout << max_sum << endl;

    return 0;

}

