//static variable program 
#include<iostream>
using namespace std;
class Student{
	private:
		int a=10;
		public:
		friend	void display(Student );
		
	
};
void display (Student d)
{
	cout<<"value of a:"<<d.a;
}
main()
{
	Student d ;
	display(d);
}