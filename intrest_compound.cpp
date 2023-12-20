#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float p,q,r,n,a;
	int i;
	for(i=1;i<=10;i++)
	{
		cout<<"enter intrest compound:"<<endl;
		cin>>q;
		cout<<"enter principal compound:"<<endl;
		cin>>p;
		cout<<"enter rate:"<<endl;
		cin>>r;
		cout<<"enter year:"<<endl;
		cin>>n;
		a=p*(pow((1+(r/q)),n*q));
		cout<<"amoun:"<<a<<endl;
		
		
	}
	return 0;
}
