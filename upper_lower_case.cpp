#include<bits/stdc++.h>
using namespace std;
int main(){
//	string a="Siddhi";
//	a[0]=tolower(a[0]);
//	cout<<a<<endl;
//change cases of all charaecters
string s="siddhi";
for (int i=0; i<s.size();i++){
	if(s[i]>='a' && s[i]<='z'){
		s[i]-=32;
	}
	else{
		s[i]+=32;
	}
}
cout<<s<<endl;
}
