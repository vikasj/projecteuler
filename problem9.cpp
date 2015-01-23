#include <iostream>
using namespace std;

int main () {
    int aVal, bVal, cVal;

    for (int a = 0; a <= 1000; a++) {
        for (int b = 1; b <=1000; b++) {
            if (1000*a + 1000*b - a*b == 500000) {
                aVal= b;
                bVal = a;
                break;
            }
        }
    }

    cVal = 1000 - aVal - bVal;

    cout << "a = " << aVal << endl << "b = " << bVal << endl << "c = " << cVal << endl;
    cout << aVal * bVal * cVal;
}
