#include<iostream>
using namespace std;

class student{

    string name;  // Private type only be accessed inside the student class.

    public: // Can access anywere outside the code 
    int age; 
    bool gender;

    void print_info(){
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
    }

    void setname(string s){  // access private to set the name
        name = s;
    }

    // Constructor
    //Invoke as soon as class object is created
    //It can be parameterized
    student(){
        cout << "default constructor" << endl;
    } // default constructor

    student(string s, int a, int g){
        cout << "parameterized constructor" << endl;
        name = s;
        age = a;
        gender = g;
    } // parameterized constructor

    // Copy contructor
    // To copy the class objects we use the copy constructor
    student(student &a){
        cout << "Copy constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    // Shallow Copy

    // Destructor
    // Invoked when the object goes out of scope or is explictly destroyed by a call to delete.
    ~student(){
        cout << "Destructor called" << endl;
    }



};

int main(){

    // // create object from class
    // student a;
    // string s = "Dheeraj";
    // a.setname(s);  // call setname to access "private member" to set name.
    // a.age = 23;
    // a.gender = 1;

    // // create object from class
    // student arr[3];
    // for(int i = 0; i < 3; i++){
    //     string s;
    //     cout << "Enter name" << endl;
    //     cin >> s;
    //     arr[i].setname(s);
    //     cout << "Enter age" << endl;
    //     cin >> arr[i].age;
    //     cout << "reveal gender, Bool type 0 for girl, 1 for men" << endl;
    //     cin >> arr[i].gender;
    //  }

    // // print all info.
    // for(int i = 0; i < 3; i++){
    //     arr[i].print_info();
    // }

    student b; // automatically default contructor called.

    student c("Ayushi", 24, 0);
    c.print_info();

    student d = c;  // This line calls copy constructor.
    d.print_info();







    return 0;
}

