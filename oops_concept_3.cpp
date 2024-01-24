#include<iostream>
using namespace std;
int main(){
	int n1,n2,n3;
	int *p1,*p2,*p3;
	int greatest,smallest;
	cout<<"enter the numbers:";
	cin>>n1>>n2>>n3;
	p1=&n1;
	p2=&n3;
	greatest=((*p1>=*p2)&&(*p1>=*p3))?(*p1):((*p2>=*p3)?(*p2):*p3);
    smallest=((*p1<=*p2)&&(*p1<=*p3))?(*p1):((*p2<=*p3)?(*p2):*p3);
    cout<<"the greater of three is:"<<greatest;
    cout<<"\n the smallest of three is:"<<smallest;
    return 0;
	
}

