#include<iostream>
using namespace std;
class Student {
	public:
		int marks;
		Student operator + (Student s)
		{
			Student t;
			t.marks = marks +s.marks;
			return t;
		}
		void display(){
			cout<<"two students total marks are :"<<marks;
		}
};
main()
{
	Student s1,s2,s3;
	s1.marks = 20;
	s2.marks = 23;
	s3 = s1+s2;
	s3.display();
}