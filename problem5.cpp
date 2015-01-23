#include <iostream>
using namespace std;

int main() {
    int result = 0;
    int count =20;
    while (result != 1) {
        for (int i = 2; i<=20; i++) {
            if((count%i)>0) {
                count++;
                result = 0;
                break;
            } else {
                result = 1;
            }
        }
    }
    cout << count << endl;
}
