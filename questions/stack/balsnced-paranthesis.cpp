#include<iostream>
#include<stack>
using namespace std;

bool balanced_parenthesis(string s){

    int n = s.length();
    
    stack<char> st;
    
    for(int i = 0; i < n; i++){
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            st.push(s[i]);
        }
        else if(s[i] == ')'){
            if(st.top() == '('){
                st.pop();
                return true;
            }
            else{
                return false;
            }
        }
        else if(s[i] == '}'){
            if(st.top() == '}'){
                st.pop();
                return true;
            }
            else{
                return false;
            }
        }
        else if(s[i] == ']'){
            if(st.top() == '['){
                st.pop();
                return true;
            }
            else{
                return false;
            }
        }
    }
    if(!st.empty()){
        return false;
    }
    return true;

    
}

int main(){

    string s = "({[]})";

    cout << balanced_parenthesis(s) << endl;

    return 0;
}

