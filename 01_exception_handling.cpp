// Exception handling using try, throw and catch
#include <iostream>
using namespace std;

double divide(int a, int b) {
    if (b == 0)
        throw "Division by zero is not allowed";
    return (double)a / b;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    try {
        double result = divide(a, b);
        cout << "Result = " << result << endl;
    }
    catch (const char *msg) {
        cout << "Exception caught: " << msg << endl;
    }
    cout << "Program continues after exception handling" << endl;
    return 0;
}
