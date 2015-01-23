#include <iostream>
using namespace std;

//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
int main() {
int sumofsquares=0;
int squareofsum=0;

for (int i = 1; i<=100; i++) {
    sumofsquares+=i*i;
    squareofsum+=i;
}
cout << ((squareofsum*squareofsum)-sumofsquares) << endl;

}
