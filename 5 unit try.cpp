#include<iostream>
using namespace std;
int main(){
	int a= 10,b=0;
	try{
		if (b==0)
		throw "division by zero!";
		cout<<a/b;
	}
	catch(const char* msg){
		cout<<"caught:"<<msg;
		
	}
	cout<<"\nprogram continues";
	}
