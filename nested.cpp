#include <iostream>
using namespace std;

class Outer {
public:
    class Inner {
    public:
        void display() {
            cout << "This is a nested class." << endl;
        }
    };
};

int main() {
    Outer::obj;
    obj.display();

    return 0;
}