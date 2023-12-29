#include<iostream>
using namespace std;
int main()
{ 
float distance,meter,feet,inch,centemeter;
cout<<"enter the distance between two cities:";
cin>>distance;
meter=distance*1000;
cout<<meter<<endl;
feet=meter/30;
cout<<feet<<endl;
inch=feet/12;
cout<<inch<<endl;
centemeter=meter*100;
cout<<centemeter<<endl;
return 0;

}
