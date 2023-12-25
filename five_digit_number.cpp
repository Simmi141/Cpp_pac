#include<iostream>
using namespace std;
int main()
{
	int number,a,b,c,d,e,f,g,h,sum;
	cout<< "enter five digit number : ";
	cin>>number;
	a=number/10000;
	b=number%10000;
	c=b/1000;
	d=b%1000;
	e=d/100;
	f=d%100;
	g=f/10;
	h=f%10;
	sum=a+c+e+g+h;
	cout<<"sum is :"<<sum<<endl;
	
	return 0 ;
	
}
