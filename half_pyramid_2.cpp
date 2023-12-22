#include<iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"enter the value of n:"<<endl;
	cin>>n;
	for(i=n;i>=1;i--)
	{for(j=i;j>0;j--){
		cout<<"*";
	}
	cout<<endl;
	}
}
