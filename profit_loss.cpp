#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int cost_price,selling_price,profit,loss;
	cout<<"enter the cost price: "<<endl;
	cin>>cost_price;
	cout<<"enter the selling price: "<<endl;
	cin>>selling_price;
	if( cost_price<selling_price)
	{
		profit=selling_price-cost_price;
		cout<<"profit is :"<<profit<<endl;
		
	}
	else if (selling_price < cost_price)
	{
		loss=cost_price-selling_price;
		cout<<"loss is:"<<loss<<endl;
	}
	else
	{
		cout<<"we don't get any profit or loss"<<endl;
		
	}
	return 0;
}
