#include<iostream>
using namespace std;
int main()
{
	int hour,i=1,over_time , over_time_pay;
	
	
	while(i<=10){
		cout<<"enter the working hour :"<<endl;
	cin>>hour;
	if(hour>40)
        {
            over_time = hour - 40;
            over_time_pay = over_time * 12;
            cout<<"over time is :"<<over_time <<"overtime pay is:"<< over_time_pay<<endl;
            
			}
		else
		cout<<"You have to work for more than 40 hours to get over time pay" <<endl;
		return 0;
}}
