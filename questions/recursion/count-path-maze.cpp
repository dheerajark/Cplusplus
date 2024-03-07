#include<iostream>
using namespace std;

int total_path_maze(int n, int x, int y){
    if(x == n-1 && y == n-1){
        return 1;
    }
    if(x >= n || y >= n){
        return 0;
    }
    return total_path_maze(n, x+1, y) + total_path_maze(n, x, y+1);
}

int main(){
    cout << total_path_maze(3, 0, 0) << endl;

    return 0;

}

