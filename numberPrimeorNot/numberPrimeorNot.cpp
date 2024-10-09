// WAF to check if a number is prime or not.

#include<iostream>

using namespace std;

void checkPrimeOrNot(int x) {
    bool isPrime = true;

    for(int i=2; i<x; i++) {
        if(x%i==0) {
            isPrime = false;
            break;
        }
    }

    if(isPrime == true) {
        cout << x << " is a prime number." << endl;
    } else {
        cout << x << " is not a prime number." << endl;
    }
}

int main() {
    checkPrimeOrNot(4);
    return 0;
}