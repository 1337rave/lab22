#include "func.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    int choice;
    while (true) {
        cout << "Choose an option:" << endl;
        cout << "1. Print Rectangle" << endl;
        cout << "2. Calculate Factorial" << endl;
        cout << "3. Check if Prime" << endl;
        cout << "4. Calculate Cube" << endl;
        cout << "5. Find Maximum" << endl;
        cout << "6. Check if Positive" << endl;
        cout << "7. Calculate Power" << endl;
        cout << "8. Calculate Sum in Range" << endl;
        cout << "9. Find Perfect Numbers in Range" << endl;
        cout << "10. Print Card" << endl;
        cout << "11. Check if Lucky Number" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0) {
            break;
        }

        switch (choice) {
        case 1: {
            int N, K;
            cout << "Enter height (N): ";
            cin >> N;
            cout << "Enter width (K): ";
            cin >> K;
            printRectangle(N, K);
            break;
        }
        case 2: {
            int n;
            cout << "Enter a number: ";
            cin >> n;
            int fact = factorial(n);
            cout << "Factorial of " << n << ": " << fact << endl;
            break;
        }
        case 3: {
            int n;
            cout << "Enter a number: ";
            cin >> n;
            bool prime = isPrime(n);
            cout << "Is " << n << " prime? " << (prime ? "Yes" : "No") << endl;
            break;
        }
        case 4: {
            int n;
            cout << "Enter a number: ";
            cin >> n;
            int numCube = cube(n);
            cout << "Cube of " << n << ": " << numCube << endl;
            break;
        }
        case 5: {
            int a, b;
            cout << "Enter the first number: ";
            cin >> a;
            cout << "Enter the second number: ";
            cin >> b;
            int maxNum = max(a, b);
            cout << "Max of " << a << " and " << b << ": " << maxNum << endl;
            break;
        }
        case 6: {
            int n;
            cout << "Enter a number: ";
            cin >> n;
            bool positive = isPositive(n);
            cout << "Is " << n << " positive? " << (positive ? "Yes" : "No") << endl;
            break;
        }
        case 7: {
            double base;
            int exponent;
            cout << "Enter the base: ";
            cin >> base;
            cout << "Enter the exponent: ";
            cin >> exponent;
            double powerResult = power(base, exponent);
            cout << base << "^" << exponent << ": " << powerResult << endl;
            break;
        }
        case 8: {
            int start, end;
            cout << "Enter the start of the range: ";
            cin >> start;
            cout << "Enter the end of the range: ";
            cin >> end;
            int sum = sumInRange(start, end);
            cout << "Sum of numbers from " << start << " to " << end << ": " << sum << endl;
            break;
        }
        case 9: {
            int start, end;
            std::cout << "Enter the start of the range: ";
            std::cin >> start;
            std::cout << "Enter the end of the range: ";
            std::cin >> end;
            findPerfectNumbers(start, end);
            break;
        }
        case 10: {
            string card;
            cout << "Enter a playing card: ";
            cin >> card;
            printCard(card);
            break;
        }
        case 11: {
            int number;
            cout << "Enter a six-digit number: ";
            cin >> number;
            bool lucky = isLuckyNumber(number);
            cout << "Is " << number << " a lucky number? " << (lucky ? "Yes" : "No") << endl;
            break;
        }
        default:
            cout << "Invalid choice. Please select a valid option." << endl;
        }
    }

    return 0;
}
