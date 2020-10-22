# include<iostream>
using namespace std;

int main(){
    // break is used to jump to out of the loop
    for (int i = 0; i<10; i++) {
        if (i == 4) {
            // due to break at 4 this loop will end
            break;
        }
        cout << i << "\n";
    }

    
    return 0;
}

