#include<iostream>
using  namespace std;
class counter{
	int count;
	public:
		counter(){count = 10;}
		void operator++(){
			count++;
		}
		void display(){
			cout<<"value:"<< count;
		}
		
};
int main(){
	counter c;
	c.display() ;
	++c;
	c.display();
	
}