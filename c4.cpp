#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter the number :";
    cin >> n;
    for (int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            cout << "its not a prime" << endl;
            break;
        } else {
            cout << "its a prime" << endl;
            break;
        }
    }
}