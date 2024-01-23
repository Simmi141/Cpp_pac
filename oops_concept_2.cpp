#include<iostream>
#include<string>
using namespace std;
struct student {
	string name;
	int age,rollno;
	void getdata (){
		cout<<"enter the details of the student name\n name:";
		cin>>name;
		cout<<"age:";
		cin>>age;
		cout<<"roll no:";
		cin>>rollno;
	}
	void showdata (){
		cout<<"\n the details are:";
		cout<<"\n name:"<<name<<"\n age:"<<age<<"\n rollno:"<<rollno;
	}
};
int main(){
	student s1;
	s1.getdata();
	s1.showdata();
}
