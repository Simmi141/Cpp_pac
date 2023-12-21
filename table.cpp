#include<iostream>
using namespace std;
int main()
{
	int n,i,table;
	cout<<"enter the given number:"<<endl;
	cin>>n;
	for(i=1;i<=10;i++){
		table=n*i;
		cout<<n<<"*"<<i<<"="<<table<<endl;
	}
	return 0;
}
