#include <iostream>
using namespace std;

int main() {
    int nums[] = {23,12,5,-5,24,14,8};
    int size = sizeof(nums) / sizeof(int);
    int smallest = INT8_MAX;
    int largest = INT8_MIN;
    for (int i =0 ; i < size ; i++) {
        // if (nums[i] < smallest) {
        //     smallest = nums[i];
        // }
        smallest = min(nums[i] , smallest);
        // if (nums[i] > largest) {
        //     largest = nums[i];
        // }
        largest = max(nums[i], largest);
    }
    cout << "smallest = " << smallest << endl;
    cout << "largest = " << largest << endl;
    return 0;
}