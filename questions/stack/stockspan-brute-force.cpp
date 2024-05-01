#include<iostream>
#include<vector>
using namespace std;

int main(){
    
    vector<int> a;
    a = {100, 80, 60, 70, 60, 75, 85};

    vector<int> res;

    for(int i = 0; i < a.size(); i++){
        int days = 0;
        for(int j = i; j >= 0; j--){
            if(a[j] <= a[i]){
                days += 1;
            }
            else{
                break;
            }
        }
        res.push_back(days);
    }

    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    cout << endl;


    return 0;
}
