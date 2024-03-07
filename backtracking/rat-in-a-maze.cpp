#include<iostream>
using namespace std;

bool is_safe(int **arr, int n, int x, int y){
    if(x < n && y  < n && arr[x][y] == 1){
        return true;
    }
    else{
        return false;
    }
}

bool rat_in_maze(int **arr, int n, int x, int y, int **soln_arr){

    if(x == (n-1) && y == (n-1)){
        soln_arr[x][y] == 1;
        return true;
    }


    if(is_safe(arr, n, x, y)){
        soln_arr[x][y] == 1;
        if(rat_in_maze(arr, n, x+1, y, soln_arr)){
            return true;
        }
        if(rat_in_maze(arr, n, x, y+1, soln_arr)){
            return true;
        }
        arr[x][y] == 0;   // backtrack
        return false;
    }
    return false;
}


int main(){

    int n;
    cin >> n;

    int** arr = new int*[n];
    for(int i = 0; i < n; i++){
        arr[i] = new int[n];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }

    int** soln_arr = new int*[n];
    for(int i = 0; i < n; i++){
        soln_arr[i] = new int[n];
        for(int j = 0; j < n; j++){
            soln_arr[i][j] = 0;
        }
    }

    if(rat_in_maze(arr, n, 0, 0, soln_arr)){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cout << soln_arr[i][j] << " ";
            }
            cout << endl;
        }
    }


    return 0;

}


// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1

