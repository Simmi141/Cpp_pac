#include<iostream>
#include<cmath>
using namespace std;
int main()

{
	int pop,increased_pop,population,i,year;
	cout<<"enter the given poulation:"<<endl;
	cin>>pop;
	for (i=1;i<=10;i++)
	{
		//increased_pop=((pop*10)/100);
		population = pop+((pop*10)/100);
		//for(population=pop;population*=(10/100);population++){
		increased_pop=population+(population*10)/100;
		cout<<"year"<<i<<"-"<<increased_pop<<endl;
	
	}
	
	return 0;
	
	
}
