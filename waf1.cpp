#include <iostream>
using namespace std;

bool isPrime(int n) {
    for (int i =2; i*i <= n; i++) {
        if(n % i == 0) {
            return false;
        }
    return true;
    }
}
void allPrime(int n) {
    for (int i=2; i <=n; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }
}
int main(){
    int in;
    cout << "Enter the number to check :";
    cin >> in;
    allPrime(in);
    cout << endl;
    return 0;
}