#include <iostream>
using namespace std;

int factorial(int n) {
    int result = 1;
    if (n==0)
    return result;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    // Overflow for large n values not handled
    cout << "Factorial of " << n << " is " << factorial(n) << endl;
}
