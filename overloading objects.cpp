#include<iostream>
using namespace std;
class Student 
{
	public:
    int marks;
    Student operator +(Student s)
    {
    	Student stu;
    	stu.marks =  marks+s.marks;
    	return stu;
	}
};
main(){
	Student s1,s2,s3;
	s1.marks =34;
	s2.marks= 35;
	s3=s1+s2;
	cout<<"student s1 and s2 maeks are added:"<<s3.marks;
}