#include<iostream>
using namespace std;
class Student {
	public:
		void show(){
			cout<<"no arugument"<<endl;
		}
		void show(int a)
		{
			cout<<"one arugument:"<<a;
		}
		void show(int a,int b)
		{
			cout<<"two arugument:"<<a<<""<<b;
					}
		
};
 main()
 {
 	 Student s; 
 	 s.show();
	s.show(10);
	s.show(10,20);
 }