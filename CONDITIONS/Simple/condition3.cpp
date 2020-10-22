#include <iostream>
using namespace std;

int main() {
    // if else if
    int time;
    cout << "Enter 1-24 digit: ";
    cin >> time;

    if (time < 10){
        cout << "Good Morning";
    }else if (time <20){
        cout << "Good day";
    }else {
        cout << "Good evening";
    }

    return 0;
}