#include<iostream>
using namespace std;
int main()
{ 
int pi=3.14, length,breadth,rectangle,area_rectangle,perimeter;
float circle,radius,area_circle,circumference;
cout<<"enter the length of rectangle:";
cin>>length>>endl;
cout<<"enter the breadth of rectangle:";
cin>>breadth>>endl;
cout<<"enter the radius of circle:";
cin>>radius>>endl;

area_rectangle=length*breadth;
cout<<area_rectangle<<endl;
perimeter=2*(length+breadth);
cout<<perimeter<<endl;
area_circle= pi*radius*radius;
cout<<area_circle<<endl;
circumference=2*pi*radius;
cout<<circumference<<endl
return 0;
}
