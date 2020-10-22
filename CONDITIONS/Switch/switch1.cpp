#include <iostream>
using namespace std;

int main() {
    // Switch expression is evaluated once
    // Simple day example
    int day;
    cin >> day;

    switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
default:
cout << "None of the cases match the no: " << day; // This will execute in case none is true
}

    return 0;
}