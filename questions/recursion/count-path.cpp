#include<iostream>
using namespace std;

int total_ways(int n, int m){
    if(n == m){
        return 1;
    }
    if(n > m){
        return 0;
    }
    int count = 0;
    for(int i = 0; i <= n; i++){
       count += total_ways(n+i, m);
    }
    return count;
}

int main(){
    cout << total_ways(1, 4) << endl;

    return 0;

}

