#include<iostream>
using namespace std;
int main(){
	int n,i,j;
	for(n=1;n<=100;n++){
		if(n%2==0){
			cout<<n<<" is even"<<endl;
		}
	}
	for(n=1;n<=100;n++){
	
		 if(n%2!=0){
			cout<<n<<" is odd"<<endl;
		}
	}
	return 0;
} 
