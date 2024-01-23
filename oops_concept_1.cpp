#include<iostream>
using namespace std;
class solution{
	int n,*nums,sum,pro;
	public :
		solution (){
			cout<<"enter the size of array:";
			cin>>n;
			nums = new int[n];
			sum =0;
			pro=1;
		}
		void getinput (){
			cout<<"enter the value of an array:";
			for(int i =0;i<n;i++){
				cin>>nums[i];
				pro=pro*nums[i];
				sum=sum+nums[i];
			}
		}
		void display(){
			cout<<"the sum of all element is:"<<sum<<"product is:"<<pro;
		}
		void prosum(){
		getinput();
		display();
				}
				~solution(){delete[]nums;
				}
};
int main(){
	solution s;
	s.prosum();
}
