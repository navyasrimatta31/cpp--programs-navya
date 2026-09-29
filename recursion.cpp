#include<iostream>
using namespace std;
int fact (int);
main()
{
	int n;
	cout <<"enter num value: ";
	cin>>n;
	cout<<"factorial of"<<n<<"is"<<fact(n);
	}
	int fact(int num)
	{
		if (num==0||num==1){
			return 1;
		}else{
			return num*fact(num-1);
		}
	}
	