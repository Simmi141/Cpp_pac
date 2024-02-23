#include<iostream>
using namespace std;
class Test {
	int count ;
	public :
		Test (){
			count ++;
			cout<<"object no "<<count<<"created\n";
		}
		~Test(){
			cout<<"object no "<<count<<"destroyed\n";
			count--;
		}
		
	
};
int main(){
	Test t1,t2,t3;
}
