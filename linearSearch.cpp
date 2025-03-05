#include <iostream>
using namespace std;


int linear_search(int nums[], int target,int sz){
    for (int i=0; i < sz; i++) {
        if (nums[i] == target) {
            return i;
        }
    }
    return -1;
}
int main () {
    int arr[] = {2,3,64,6,23,6,34};
    int sz = 7;
    int target = 0;
    cout << linear_search(arr, target, sz);
}