// Calculate nCr binomial coefficient for n & r

#include<iostream>

int fact(int x) {
    int facto = 1;
    for(int i = 1; i<=x; i++) {
        facto *= i;
    }
    return facto;
}

int nCr(int n, int r) {
    int fact_n = fact(n), fact_r = fact(r), fact_nmr = fact(n-r);
    return fact_n / (fact_r * fact_nmr);
}

int main() {
    int n = 6, r = 3;
    std::cout<<nCr(n, r);
    return 0;
}