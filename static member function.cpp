#include <iostream>
using namespace std;

class Student {
private:
    static int count;

public:
    Student() {
        count++;
    }

    static void displayCount() {
        cout << "Total Students: " << count << endl;
    }
};

// Definition of static data member
int Student::count = 0;

int main() {
    Student s1;
    Student s2;
    Student s3;

    // Calling static member function using class name
    Student::displayCount();

    return 0;
}