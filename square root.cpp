#include<iostream>
#include<cmath>
using namespace std;
main()
{
	int a,b,c,d ,r1,r2;
	cout<<"enter a,b and c  values:";
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d>0)
	{
		r1=(-b+sqrt(d))/(2*a);
		r1=(-b-sqrt(d))/(2*a);
		cout<<"roots are real:";
		cout<< "root 1:"<<r1;
		cout<<"root 2:"<<r2;
}else if(d==0)
{
	r1 = (-b)/(2*a);
	cout<<"roots are equal";
	cout<<"root is:"<<r1;
}
else{
	cout<<"roots are complex";
	cout<<"root1:"<<r1;
	cout<<"root2:"<<r2;
}
}