#include<iostream>
using namespace std;
void tables(int,int);
int main()
{
    int i,j,n;
    cout<<"\nEnter the Table number:";
    cin>>j;
    cout<<"\nEnter the limit:";
    cin>>n;
    tables(j,n);
    return 0;
}
void tables(int j,int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        cout<<"\n"<<i<<"*"<<j<<"="<<i*j;
    }
}
  
