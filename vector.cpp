#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1,2,3};

    arr.push_back(5);
    for(int val : arr) {
        cout << val << " " << endl;
    }
    cout << arr.size() << endl;
}