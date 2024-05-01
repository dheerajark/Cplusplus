#include<iostream>
#include<vector>
using namespace std;

int largest_rectangle(vector<int> a){
    int n = a.size();
    int ans = 0;
    for(int i = 0; i < n; i++){
        int minh = 1e6;
        for(int j = i; j < n; j++){
            minh = min(a[j], minh);
            int len = j - i + 1;
            ans = max(ans, len * minh);
        }
    }
    return ans;
}



int main(){
    vector<int> a;
    a = {2, 1, 5, 6, 2, 3};

    cout << largest_rectangle(a) << endl;

    return 0;

}

