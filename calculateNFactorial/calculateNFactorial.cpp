// Calculate N factorial.

#include<iostream>

int factOfNNumbers(int x) {
    int fact = 1;
    for(int i= 1; i<=x; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    std::cout << "Factorial is = " << factOfNNumbers(10);
    return 0;
}