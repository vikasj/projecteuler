#include <iostream>
using namespace std;

bool isPrime(int num) {
    int divisor = 2;

    if (num <=1) {
        return false;
    }
    while (num/divisor >= divisor) {
            if (num%divisor == 0){
                return false;
            }
            ++divisor;
    }
    return true;
}

int main(){
int primecount = 6;
int count = 13;
while (primecount != 10001) {
    count+=2;
    if (isPrime(count)) {
        primecount++;
    }
}
cout << count << endl;
}
