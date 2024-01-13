#include<iostream>
using namespace std;
void vote (char na,int ag){
	
	if(ag<18){
		cout<<na<<"you are not eligible"<<endl;;
	}
	else{
		cout<<na<<"you can vote"<<endl;;
	}
	
}
int main(){
	int age;
	cout<<"age:"<<endl;
	cin>>age;
	vote('s',age);
}
