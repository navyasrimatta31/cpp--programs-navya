#include<iostream>
using namespace std;
class student
{
	int id;
	public:
	void getdata()
	{
		cin>>id;
	}
	void display()
	{
		cout<<id<<endl;
	}
};
main()
{
	student s[5];
	cout<<"enter value for id: "<<endl;
	for(int i=0;i<=5;i++)
	{
		s[i].getdata();
	}
	cout<<"id values are: "<<endl;
	for(int i=0;i<5;i++)
	{
		s[i].display();
	}
}
