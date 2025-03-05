// *      *  i = 0
// **    **  i = 1
// ***  ***  i = 2
// ********  i = 3

// ********  i = 0
// ***  ***  i = 1
// **    **  i = 2
// *      *  i = 3


#include <iostream>
using namespace std;

int main (){
    int n = 4;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j< i+1; j++) {
            cout << "*";
        }
        for (int j =0; j < 2*(n-i)-2; j++) {
            cout << " ";
        }
        for (int j=i+1; j > 0; j--) {
            cout << "*";
        }
            
        cout << endl;
    }
    for (int i=0; i<n; i++) {
        for (int j=n-i; j > 0; j--) {
            cout << "*";
        }
        for (int j=0; j<2*i; j++) {
            cout << " ";
        }
        for (int j=0; j<n-i; j++) {
            cout << "*";
        }
        cout << endl;
    }


    return 0;
}