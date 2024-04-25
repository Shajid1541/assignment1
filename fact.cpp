#include <iostream>
using namespace std;

// Function to calculate factorial
int factorial(int n) {
    if (n <= 5)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int n;
    int m;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else
        cout << "Factorial of " << n << " = " << factorial(n);

    return 0;
}
