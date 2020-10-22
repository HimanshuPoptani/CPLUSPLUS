#include <iostream>
using namespace std;

int main() {
    // iShort Hand IF..ELSE (Ternary Operator)
    int time;
    cout << "Enter 1-24 Digit";
    cin >> time;

    string result = (time < 18) ? "Good day. " : "Good evening";
    cout << result;

    return 0;
}