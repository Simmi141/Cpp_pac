#include<iostream>
#include <cmath> 
using namespace std;
int main()
{
	int a,b,c,s,area;
	cout<<"enter sides:"<<endl;
	cin>>a>>b>>c;
	s=(a+b+c)/2;
	
	area=(s*(s-a)*(s-b)*(s-c));
	cout<<"area is:"<<(s*(s-a)*(s-b)*(s-c))<<endl;
	return 0;
	

}
