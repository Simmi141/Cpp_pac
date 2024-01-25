#include<iostream>
using namespace std;
class test {
	int n1,n2;
	public :
		test(int x ,int y):n1(x), n2(y){}
		void innerfunction (){
			cout<<"inner function defined inside the class to find the sum of both number\n";
			cout<<"the sum is:"<<n1+n2<<endl;
		}
		int outerfunc(void);
		
};
int test :: outerfunc(){
	cout<<"function defined out side the class to find product of the number\n";
	cout<<"the product is :"<<n1*n2<<endl;
}
int main (){
	test t1(3,5);
	t1.innerfunction();
	t1.outerfunc();
}
