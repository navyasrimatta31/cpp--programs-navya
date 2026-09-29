#include<iostream>
using namespace std;
class Student {
	public:
		int marks;
		Student (int m): marks(m){ }
				Student operator + (Student s)// constru
		{
			return Student(marks+s.marks);
		}
		void display(){ 
		
			cout<<"two students total marks are :"<<marks;
		}
};
class Minus {
   public :
   	int num;
    Minus(int n):num(n){}
   	Minus operator -(){
   		{
   			return -num;
   			
			}
			void display(){
				cout<<"minus opertor overlaoding value is :"<<num;
				
			} 
	   } ;
main()
{
	Student s1(54),s2(34);
	Student s3= s1+s2;
	
	s3.display();
}