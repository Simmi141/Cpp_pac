#include<iostream>
using namespace std;
int main(){
	int i,j,k,n;
	cout<<"enter the value of n:";
	cin>>n;
	for(i=n;i>=1;i--){
		for(k=n-i;k>0;k--){
			cout<<" ";
		}
		for(j=i;j>0;j--){
			cout<<"*";
		}cout<<endl;
		
	}
	return 0;
}
