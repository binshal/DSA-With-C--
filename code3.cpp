#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Enter the number :";
    cin >> n ;
    int sum = 0;
    for (int i = 0; i <= n; i++) {
        if (i % 2 == 1) {
            sum += i;
        } else {
            continue;
        }
        
    }
    cout << sum << endl;

}