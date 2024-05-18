//Write a function using reference variables as arguments to swap the values of a pair of integers.

#include <iostream>
using namespace std;

void swapIntegers(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int num1 = 10;
    int num2 = 20;

    cout << "Enter the first integer: ";
    cout << "Enter the second integer: ";

    cout << "Original values: num1 = " << num1 << ", num2 = " << num2 << endl;

    swapIntegers(num1, num2);

    cout << "Swapped values: num1 = " << num1 << ", num2 = " << num2 << endl;

    return 0;
}
