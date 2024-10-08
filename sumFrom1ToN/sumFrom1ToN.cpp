// Calculate sum of numbers from 1 to N.

#include<iostream>

using namespace std;

int calSum(int n) {
    int sum = 0;
    for(int i=0; i<=n; i++) {
        sum+=i;
    }
    return sum;
}

int main() {
    int num = 10;
    cout << calSum(num);
    return 0;
}