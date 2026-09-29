#include <iostream>
using namespace std;

class Demo
{
public:
    void display()
    {
        cout << "No arguments" << endl;
    }

    void display(int x)
    {
        cout << "Integer: " << x << endl;
    }

    void display(double y)
    {
        cout << "Double: " << y << endl;
    }

    void display(int x, int y)
    {
        cout << "Sum = " << x + y << endl;
    }
};

int main()
{
    Demo obj;

    obj.display();
    obj.display(10);
    obj.display(5.5);
    obj.display(20, 30);

    return 0;
}