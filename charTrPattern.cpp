#include <iostream>
using namespace std;

int main () {
    // int n = 5;
    // char ch = 'A';
    // for (int i = 0; i < n ; i++) {
    //     for (int j = 0 ; j < i + 1 ; j++) {
    //         cout << ch << " ";
    //     }
    //     ch++;
    //     cout << endl;
    // }
    int n = 4;
    for (int i = 0; i < n; i++) {
        for (int j = 1 ; j <= i+1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}