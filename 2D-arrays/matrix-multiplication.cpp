#include<iostream>
using namespace std;

int main(){
    int n1 = 2;
    int n2 = 3;
    int n3 = 2;
    int arr[n1][n2] = {{1, 2, 3}, {4, 5, 6}};
    int array[n2][n3] = {{1, 2}, {3, 4}, {5, 6}};

    int ans[n1][n3];

    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n3; j++){
            ans[i][j] = 0;
        }
    }
    
    // logic
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n3; j++){
            for(int k = 0; k < n2; k++){
                ans[i][j] += arr[i][k]*array[k][j];
            }
        }
    }

    // print
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n3; j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;

}

