// Calculate sum of digits of a number.

#include <iostream>

void sumOfDigits(int num) {
    int mod = 0;
    int cal = 0;
    while (num > 0) { 
        cal = num % 10;
        num /= 10; 
        mod = mod + cal;
    }
    std::cout << mod;
}

int main() {
    sumOfDigits(145);
    return 0;
}