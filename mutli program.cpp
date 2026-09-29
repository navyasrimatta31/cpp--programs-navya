#include <iostream>
using namespace std;

template <class T, class U>
class muilty {
    T x;
    U y;

public:
    muilty(T a, U b) {
        x = a;
        y = b;
    }

    void display() {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << "Multiplication = " << x * y << endl;
    }
};

int main() {
    muilty<int, double> obj(10, 20.5);
    obj.display();

    return 0;
}