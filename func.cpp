#include "func.h"
#include <iostream>
#include <cmath>
#include <string>

// Task 1: Function to print a rectangle
void printRectangle(int N, int K) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < K; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

// Task 2: Function to compute factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

// Task 3: Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// Task 4: Function to return the cube of a number
int cube(int n) {
    return n * n * n;
}

// Task 5: Function to find the maximum of two numbers
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Task 6: Function to check if a number is positive or negative
bool isPositive(int n) {
    return n > 0;
}

// Task 7: Function to calculate the power of a number
double power(double base, int exponent) {
    return std::pow(base, exponent);
}

// Task 8: Function to calculate the sum of numbers in a range
int sumInRange(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; i++) {
        sum += i;
    }
    return sum;
}

// Task 9: Function to find perfect numbers in a given range
void findPerfectNumbers(int start, int end) {
    for (int number = start; number <= end; number++) {
        int sumOfDivisors = 0;
        for (int i = 1; i <= number / 2; i++) {
            if (number % i == 0) {
                sumOfDivisors += i;
            }
        }
        if (sumOfDivisors == number) {
            std::cout << number << " is a perfect number." << std::endl;
        }
    }
}

// Task 10: Function to print a playing card
void printCard(const std::string& card) {
    std::cout << "Card: " << card << std::endl;
}

// Task 11: Function to check if a six-digit number is "lucky"
bool isLuckyNumber(int number) {
    int sum = 0;
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum == 7; // Change to any desired lucky sum.
}
