#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int year,leap_year;
	cout<<"enter the year :"<<endl;
	cin>>year;
	if((year%4==0))
	{
		cout<<"leap year"<<endl;
		
	}
	else{
		cout<<"non leap year"<<endl;
	}
	return 0;
}
