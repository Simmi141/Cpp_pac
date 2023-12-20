#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float q,r,y,natural_log;
	int n=1,x;
	cout<<"enter the value of x:"<<endl;
	cin>>x;
	y=(x-1)/2;
	for(n=2;n<=7;n++)
	{
		q=pow(y,n);
		r=q/2;
	}
	natural_log = y+r;
		cout<<"natural log :"<<natural_log<<endl;
	
	return 0;
}
