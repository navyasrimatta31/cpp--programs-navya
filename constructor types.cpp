#include <iostream>
using namespace std;

class Demo
{
public:
    int x;

    // Default constructor
    Demo()
    {
        cout << "Default Constructor" << endl;
    }

    // Parameterized constructor
    Demo(int a)
    {
        x = a;
        cout << "Parameterized Constructor" << endl;
    }

    // Copy constructor
    Demo(Demo &d)
    {
        x = d.x;
        cout << "Copy Constructor" << endl;
    }

    // Move constructor
    Demo(Demo &&d)
    {
        x = d.x;
        d.x = 0;   // Reset source object
        cout << "Move Constructor" << endl;
    }
};

int main()
{
    Demo d;            // Default constructor
    Demo d1(10);       // Parameterized constructor
    Demo d2(d1);       // Copy constructor
    Demo d3(move(d1)); // Move constructor

    cout << "Parameterized value: " << d1.x << endl;
    cout << "Copy value: " << d2.x << endl;
    cout << "Move value: " << d3.x << endl;

    return 0;
}