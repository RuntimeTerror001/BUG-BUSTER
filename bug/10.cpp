#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n) {
    int total = (n * (n + 1)) / 2;
    int sum = 0;
    for (int i = 0; i <n-1; i++) {  
        sum += arr[i];
    }
    return total -sum;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int n = 6;  // Length of array + 1 (because 1 element is missing)
    cout << "Missing number is " << findMissingNumber(arr, n) << endl;
}
