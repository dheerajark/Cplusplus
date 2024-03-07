#include<iostream>
#include<string>
using namespace std;

int main(){

    // Decleration
    string str;
    str = "Hi i am Dheeraj Kumar";

    cout << str << endl;

    // Take Input;
    string str2;
    getline(cin, str2);
    cout << str2 << endl;

    // Different function of string;
    // 1. concatenate;
    string s1 = "fam";
    string s2 = "ily";

    cout << s1 + s2 << endl;

    // access character in string;
    cout << s1[1] << endl;

    // clear function;
    string s3 = "alkjfi dfjihan asdf";
    s3.clear();

    // Compare;
    string s4 = "abc";
    string s5 = "xyz";
    cout << s5.compare(s4) << endl;


    return 0;
}

