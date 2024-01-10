#include<iostream>
using namespace std;
int main(){
	int total,n,pick,remaining,remaining2,matchsticks;
	total=21;
	cout<<"total matchsticks:"<<total<<endl;
		
	for(n=1;n<5;n++){

	cout<<"pick 1,2,3 or 4 matchsticks:"<<endl;
	cin>>pick;
	remaining=total-pick;
	
	cout<<"remaining:"<<remaining<<endl;
	
	matchsticks=5-pick;
	cout<<"computers turn: "<<matchsticks<<endl;
	remaining2=remaining-matchsticks;
	cout<<"remaining:"<<remaining2<<endl;
	total=remaining2;
	
	
	
	if(remaining2==1){
		cout<<"you loose"<<endl;}
	
}
	
	


return 0;
}

