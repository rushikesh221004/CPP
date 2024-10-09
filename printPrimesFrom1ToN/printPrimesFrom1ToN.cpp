// WAF to print all prime numbers from 1 to N.

#include <iostream>

using namespace std;

void printPrimesNumbers(int x) {
    bool isPrime = true;
    for(int i=2; i<x; i++) {
        if(x % i == 0) {
            isPrime = false;
            break;
        }
    }
    if(isPrime == true) {
        cout << x << endl;
    }
}

int main() {
    int num = 100;
    for(int i=2; i<=num; i++) {
        printPrimesNumbers(i);
    }
    return 0;
}