#include <iostream>
using namespace std;
// default paramaeter
void function(int age = 16){
    cout << "My age is " << age << "\n";
}

int main(){
    function(50);
    function(123);
    function(); // This is default and will give out the defaul set value in the function
    function(145);
    return 0;
}