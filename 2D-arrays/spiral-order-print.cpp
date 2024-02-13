#include<iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int arr[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }

    //spiral order print
    int row_start = 0; int row_end = n-1; int col_start = 0; int col_end = m-1;
    while(row_start < row_end && col_start < col_end){
        
        // For row_Start
        for(int col = col_start; col <= col_end; col++){
            cout << arr[row_start][col] << " ";
        }
        row_start++;

        // For col_end.
        for(int row = row_start; row <= row_end; row++){
            cout << arr[row][col_end] << " ";
        }
        col_end--;

        // For row_end.
        for(int nth_row = col_end; nth_row >= col_start; nth_row--){
            cout << arr[row_end][nth_row] << " ";
        }
        row_end--;

        // For col_start.
        for(int row = row_end; row >= row_start; row--){
            cout << arr[row][col_start] << " ";
        }
        col_start++;

    }

    return 0;
}

