#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float l1,l2,g1,g2,distance;
	cout<<"enter the latitude1 :"<<endl;
	cin>>l1;
	cout<<"enter the latitude2:";
	cin>>l2;
	cout<<"enter the longitude1:"<<endl;
	cin>>g1;
	cout<<"enter the longitude2:"<<endl;
	cin>>g2;
	
distance=3963*acos((sin(l1)*sin(l2))+(cos(l1)*cos(l2))*(cos(g2-g1)));
cout<<"distance="<<distance;
return 0;
}
