#include <iostream>

int modularExponentiation(int x, int n, int m) {
    int res = 1;
    while (n > 0) {
        if (n & 1) {
            res = (1LL * (res) * (x) % m) % m;
        }
        x = (1LL * (x) % m * (x) % m) % m;
        n = n >> 1;
    }
    return res;
}

int main() {
    int x = 2; // Base
    int n = 5; // Exponent
    int m = 1000000007; // Modulus
    std::cout << "Result: " << modularExponentiation(x, n, m) << std::endl;
    return 0;
}
