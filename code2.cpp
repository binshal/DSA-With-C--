#include <iostream>
using namespace std;

int main() {
    int a = 23;
    if(a >= 0) {
        cout << "a is a positive number" << endl;
    }
    char ltr;
    cout << "enter the letter :";
    cin >> ltr;
    if(ltr >= 'a' && ltr <= 'z'){
        cout << "letter is lower case \n";
    } else {
        cout << "letter is upper case \n";
    }

    return 0;
}