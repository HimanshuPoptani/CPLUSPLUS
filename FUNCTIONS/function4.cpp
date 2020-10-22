#include <iostream>
#include <string>
using namespace std;
// Multiple parameters in the function
void function(string name, int age){
    cout << "My name is " << name << " and age is " << age;
}

int main(){
    function("Himanshu", 16);
    function("Ishika", 20);
    function("Vineeta", 42);
    return 0;
}