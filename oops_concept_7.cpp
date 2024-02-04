#include<iostream>
using namespace std;
class test {
	int count;
	public :
		test (){
			count ++;
			cout<< " object no "<<count<<"created\n";
					}
					~test(){
						cout<<"object no"<<count<<"destroyed\n";
						count--;
					}
};
int main (){
	test t1,t2,t3;
}
