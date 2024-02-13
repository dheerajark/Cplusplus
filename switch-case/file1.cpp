#include<iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter a number(1-3)";
    cin >> choice;


    switch(choice) {
        case 1:
        cout << "You choose option 1\n";
        break;

        case 2:
        cout << "You choose option 2\n";
        break;

        case 3:
        cout << "You chose option 3\n";
        break;

        default:
        cout << "Invalid choice\n";
    }

    return 0;
}

