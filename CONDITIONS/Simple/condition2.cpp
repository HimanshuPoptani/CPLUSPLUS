#include <iostream>
using namespace std;

int main() {
    // if else
    int time;

    cout << "Enter 1-24 any no.: ";
    cin >> time;
    
    if(time < 18) {
        cout << "Good Day" << endl;

    } else{
        cout << "Good Morning";
    }

    return 0;
}