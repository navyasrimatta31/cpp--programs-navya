#include<iostream>
using namespace std;
class Number {
	public:
	int num;
	Number (int n ):num (n){ }
	Number operator -(){
		return -num;
		
	}
};
main(){
	Number n1(10);
	Number n2 = -n1;
	cout<<"negative object number is"<<n2.num;
}