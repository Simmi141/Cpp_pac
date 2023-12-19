#include<iostream>
#include<cmath>
using namespace std;
int main()
{

int x,y;
float r,theta,angle;

 cout<<"enter the x coordinate:\n";
 cin>>x;
 cout<<"enter the y coordinate:\n";
 cin>>y;
 r=sqrt(x*x+y*y);
 cout<<"radius="<<r<<endl;
 theta= atan(y/x);
 angle=theta*(180/M_PI);
 cout<<"theta="<<angle;
 return 0;
}
