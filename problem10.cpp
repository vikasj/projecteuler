#include <iostream>
using namespace std;

bool isPrime(int long num) {
    int long divisor = 2;
    if (num <= 1) {
        return false;
    }
    while (num/divisor >= divisor) {
        if(num%divisor == 0) {
            return false;
        }
        divisor++;
    }
    return true;
}

int main () {

    int long num = 11;
    int long long sum = 17;

    while (num < 2000000) {
        if (isPrime(num)) {
            sum += num;
        }
        num+=2;
    }
    cout << "Sum of prime numbers below 2 million: " << sum;
}
