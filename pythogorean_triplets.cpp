#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b;
	float c;
	for(a=1;a<=30;a++)
	{
		for(b=1;b<=30;b++)
		{
			c=sqrt(a*a+b*b);
			//if(c==(int)c)
			{
				cout<<a<<","<<b<<","<<(int)c<<endl;
			}
		}
	}
	return 0;
}
