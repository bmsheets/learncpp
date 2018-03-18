#include <iostream>

using namespace std;

int readNumber() {
    int x;
   
    cout << "Enter a number: ";
    cin >> x; 
    return x;
}

void writeAnswer(int sum) {
    cout << "The sum is: " << sum << endl;
}
