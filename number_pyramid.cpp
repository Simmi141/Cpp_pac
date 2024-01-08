#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the value of n:"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=n-i;j>=0;j--)
		cout<<" ";
		for(int j=0;j<=i;j++){
			int fact1=1;
			int fact2=1;
			int fact3=1;
			for(int 1=i;1>0;1--){
				fact1 *=1;
			}
			for(int 1=j;1>0;1--){
				fact2 *= 1;
			}
			for(int 1=i-j;1>0;1--){
				fact3 *=1;
			}
			int val =fact1/(fact2*fact3);
			cout<<val<<" ";
		}
		cout<<"\n";
	}
}
