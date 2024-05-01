#include<iostream>
#include<stack>
using namespace std;

bool redundant_paranthesis(string s){
    int n = s.size();
    bool ans = false;
    stack<char> st;
    for(int i = 0; i < n; i++){
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/'){
            st.push(s[i]);
        }
        else if(s[i] == '('){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            if(st.top() == '('){
                ans = true;
            }
            while(st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/'){
                st.pop();
            }
            st.pop();
        }
    }
    return ans;
}

int main(){
    string s = "(a + b)";
    cout << redundant_paranthesis(s) << endl;

    return 0;

}
