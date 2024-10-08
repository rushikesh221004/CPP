// Minimum of two numbers.

#include<iostream>

int minNumber(int a, int b) {
    return (a<b) ? a : b;
}

int main() {
    int minOfTwoNumbers = minNumber(1, 6);
    std::cout << "The Minimum number is = " << minOfTwoNumbers;
    return 0;
}