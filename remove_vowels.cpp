#include<bits/stdc++.h>
using namespace std;
int main(){
	string s="abscfferklcnfwo";
	string ans="";
	for(int i=0;i<s.size();i++){
		if( s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='A'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
			
		}
		else{
			ans+=s[i];
		}
	}
	cout<<ans<<endl;
}
