#include<bits/stdc++.h>
using namespace std;
int max(int a, int b){
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}
int main(){
	int n; cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int mx=arr[0];
	for(int i=0;i<n;i++){
		mx=max(mx,arr[i]);
	}
	cout<<mx<<endl;
}
