#include <iostream>

using namespace std;
//Multiples of 3 and 5
int main()
{
    int integer1;
    int integer2;
    int total = 3+5;
    for (int i = 6; i < 1000; i++) {
        integer1 = i/3;
        integer2 = i/5;
        if ((integer1*3) == i || (integer2*5) == i) {
            total += i;
        }
    }
    cout << total << endl;
    return 0;
}
