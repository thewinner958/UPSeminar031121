#include <iostream>

using namespace std;
int main() {
    /*int number = 0, binaryNumber = 0, d = 1, counter = 0, maxCounter = 0;
    cin >> number;
    while (number != 0) {
        binaryNumber += (number % 2) * d;
        number /= 2;
        d = d * 10;
    }
    while (binaryNumber > 10) {
        if (binaryNumber % 10) {
            counter++;
        }
        else {
            if (maxCounter < counter) {
                maxCounter = counter;
            }
            counter = 0;
        }
        binaryNumber /= 10;
    }
    cout << maxCounter << endl;
    // Exercise 6
    int number;
    cin >> number;
    for (int i = 0; i < number; ++i) {
        for (int j = 0; j <= number * 2; ++j) {
            if (j == number - i) {
                cout << "/";
            }
            else if (j == number + i +1) {
                cout << "\\";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 0; i < number * 2; ++i ) {
        cout << "-";
    }
    cout << endl;
    for (int i = 0; i < number; ++i) {
        for (int j = 0; j < number * 2; ++j) {
            if (j == 0 || j == number * 2 - 1) {
                cout << "|";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 0; i < number * 2; ++i ) {
            cout << "=";
    }
    cout << endl;*/

    // Exercise 7
    int number;
    cin >> number;
    if (number >= 1 && number <= 100) {
        for (int i = 1; i <= number - 1; ++i) {
            for (int j = 1; j <= number; ++j) {
                if (j >= i) {
                    cout << j;
                }
                else {
                    cout << " ";
                }
            }
            cout << endl;
        }
        for (int i = 0; i <= number - 1; ++i) {
            cout << " ";
        }
        cout << number << endl;
        for (int i = 1; i <= number - 1; ++i) {
            for (int j = 1; j <= number; ++j) {
                if (j >= number - i) {
                    cout << j;
                }
                else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    else {
        cout << "Invalid input\n";
    }
    return 0;
}
