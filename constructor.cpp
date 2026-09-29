#include <iostream>
using namespace std;

class Student
{
    int id;
    string name;

public:

    Student()
    {
        id = 0;
        name = "Unknown";
        cout << "Default Constructor Called" << endl;
    }


    Student(int i, string n)
    {
        id = i;
        name = n;
        cout << "Parameterized Constructor Called" << endl;
    }

    
    Student(const Student &s)
    {
        id = s.id;
        name = s.name;
        cout << "Copy Constructor Called" << endl;
    }

    void display()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{

    Student s1;
    s1.display();

    cout << endl;

    Student s2(101, "Navya");
    s2.display();

    cout << endl;


    Student s3 = s2;
    s3.display();

    return 0;
}