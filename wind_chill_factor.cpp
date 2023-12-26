#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float wcf,t,v;
	cout<<"enter the temp:"<<endl;
	cin>>t;
	cout<<"enter the velocity:"<<endl;
	cin>>v;
	wcf=35.74+(0.6215*t)+((0.4275*t)-35.75)*pow(v,0.16);
	cout<<"wcf is:"<<wcf<<endl;
	return 0;
	
}
