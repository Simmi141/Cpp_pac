#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n=40000,i,x,y,count=0;
	for (i=1;i<=n;i++)
	
	{
		for(x=1;x*x*x<i;x++)
		{
			for(y=x;x*x*x+y*y*y<=i;y++){
				if(x*x*x+y*y*y==i)
				{ count++;
				}}}
		if(count==2){
			cout<<"number:"<<i<<endl;
		}
		
	}
	
}
