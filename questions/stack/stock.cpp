#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> stockspan(vector<int> a){
    vector<int> ans;
    int n =a.size();
    stack<pair<int,int>> st;
    for(int i = 0; i < n; i++){
        int days = 1;
        while(!st.empty() && st.top().first <= a[i]){
            days += st.top().second;
            st.pop();
        }
        st.push({a[i], days});
        ans.push_back(days);
    }
    return ans;

}

int main(){

    vector<int> a;
    a = {100, 80, 60, 70, 60, 75, 85};

    vector<int> res = stockspan(a);
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }cout << endl;
    

    return 0;
}

