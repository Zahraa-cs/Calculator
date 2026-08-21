#include <iostream>
using namespace std;

void calculator(int x, int y) {
    cout << x + y << endl;
    cout << x - y << endl;
    cout << x * y << endl;

    if (y != 0) {
        cout << x / y << endl;
        cout << x % y << endl;
    } else {
        cout << "Cannot divide by zero" << endl;
        cout << "Cannot calculate remainder with zero" << endl;
    }
}

int main() {
    cout << "Welcome to your calculator\nPlease write two integers" << endl;

    int x, y;
    cin >> x >> y;

    calculator(x, y);

    return 0;
}