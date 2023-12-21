#include<iostream>
using namespace std;
int main(){
	int num,i;
	float fact=1.00,sum=0.00;
	for(num;num<=7;num++)
	{ 
	for(i=1;i<=num;i++)
	{fact = fact*i;}
	}{
		sum=sum+(i/fact);
		num++;
	}
	cout<<"sum of series is:"<<sum<<endl;
	
	return 0;
}
