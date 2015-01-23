include <iostream>
using namespace std;

//Largest prime factor
bool checkPrime(int num) {
    int divisor = 2;
    while (num/divisor >= divisor) {
        if (num%divisor == 0) {
            return false;
        }
        divisor ++;
    }
    return true;
}

int main()
{
    int large = 0;
    long long int number = 600851475143;
    for (int i = 100; i <= number; i+=3) {
        cout << i << endl;
        if (i >= number/20000000) {
            break;
        }
        if (checkPrime(i) && number%i == 0 && i > large) {
                large = i;
        }
    }
    cout << large << endl;
    return 0;
}
