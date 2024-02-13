#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 7, 4, 6};

    int pd = arr[1] - arr[0];
    int curr = 2;
    int ans = 2;
    int j = 2;
    while(j < 5){
        if(pd == arr[j] - arr[j-1]){
            curr++;
        }
        else{
            pd = arr[j] - arr[j-1];
            // current equals to 2 because of the streak break.
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }

    cout << ans << endl;

    return 0;

}

