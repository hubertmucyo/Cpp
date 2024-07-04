#include <iostream>
#include <cmath> // for sqrt function

using namespace std;

int main() {
    int num1, num2;
    prompt:
    cout << "Enter 2 numbers! [The first should be smaller!]\n";
    cin >> num1 >> num2;

    if (num1 > num2) {
        cout << "The first number should be smaller than the second number.\n";
        goto prompt;
    }

    cout << "The prime numbers between " << num1 << " and " << num2 << " are:\n";
    for (int i = num1; i <= num2; i++) {
        if (i <= 1) continue; // Skip numbers less than or equal to 1

        bool isPrime = true;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}

