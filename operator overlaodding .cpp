#include<iostream>
using namespace std;
class Student 
{
	public:
    int marks;
    Student (int m) :marks (m){ }
    Student operator + (Student &s)
    {
    	
    	return Student(marks+s.marks);
	}
};
main(){
	Student s1(67),s2(45);
	Student s3=s1+s2;
	cout<<"student s1 and s2 maeks are added:"<<s3.marks;
}