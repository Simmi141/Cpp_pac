#include<iostream>
using namespace std;
int main ()
{ 
int marks,aggeregate_marks,percentage_marks,max_marks,s1,s2,s3,s4,s5;
//assume that the maximum marks can be obtained by a student in each subject is 100
cout<<"marks in s1:";
cin>>s1;
cout<<"marks in s2:";
cin>>s2;
cout<<"marks in s3:";
cin>>s3;
cout<<"marks in s4:";
cin>>s4;
cout<<"marks in s5:";
cin>>s5;
max_marks=500;
aggeregate_marks=s1+s2+s3+s4+s5;
cout<<aggeregate_marks<<endl;
percentage_marks=(aggeregate_marks*100)/max_marks;
cout<<percentage_marks<<endl;

return 0;
}
