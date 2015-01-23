#include <iostream>
using namespace std;

//Even Fibonacci numbers
int main() {
    int term1 = 1;
    int term2 = 2;
    int total = 0;
    int totalEvenValue = 2;
    int integer;
    cin >> integer;

    while (total <= integer) {
        total = term1 + term2;
        term1 = term2;
        term2 = total;
        if (total % 2 == 0) {
            totalEvenValue += total;
        }
    }
    cout << totalEvenValue << endl;
    return 0;
}
