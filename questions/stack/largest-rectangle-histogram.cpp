#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int max_area_rectangle_histogram(vector<int> arr){
    int ans = 0;
    int n = arr.size();
    int i = 0;
    stack<int> st;
    while(i < n){
        while(!st.empty() && arr[st.top()] > arr[i]){
            int t = st.top();
            int h = arr[t];
            st.pop();
            if(st.empty()){
                ans = max(ans, h*i);
            }
            else{
                int len = i - st.top() - 1;
                ans = max(ans, h * len);
            }
        }
        st.push(i);
        i++;
    }

    return ans;
}

int main(){

    vector<int> arr;
    arr = {2, 1, 5, 6, 2, 3};

    cout << max_area_rectangle_histogram(arr) << endl;



    return 0;
}

