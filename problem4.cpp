#include <iostream>
using namespace std;

//largest palindrome using two 3 digit numbers multiplyed with each other

int palindrome (int num) {
int rev = 0;
int num2 = num;
int reminder;
while(num2 != 0)
{
    reminder = num2 % 10;
    rev = rev * 10 + reminder;
    num2 = num2 / 10;
}
if (num == rev) {
    return num;
} else {
    return 0;
}
}

int main() {
int large;
int largest = 0;

for (int i= 999; i>=100; i--) {
    for (int j=999; j>=100; j--) {
        large = palindrome(i*j);

        if (large>largest) {
            largest = large;
        }
    }
}
cout << largest << endl;
}
