#include<iostream>
using namespace std;
class A{
	int privateA;
	public:
		A(): privateA(3){}
		friend void acessA(A objA);
		friend class B;
		};
		class B {
			int privateB;
			public : 
			B(): privateB(5){}
			friend void acessB(B objB);
			void  acessPrivateA (A objA);
			
		};
		void acessA ( A objA){
			cout<<"value of private data of A is:"<<objA.privateA<<endl;
			
		}
		void acessB ( B objB){
			cout<<"value of private data of B is:"<<objB.privateB<<endl;
			
		}
		void B::acessPrivateA(A objA){
			cout<<"acessing private data of A from B: "<<objA.privateA<<endl;
		}
		int main(){
			A obja;
			B objb;
			acessA(obja);
			acessB(objb);
			
			objb.acessPrivateA(obja);
		
			
		}
