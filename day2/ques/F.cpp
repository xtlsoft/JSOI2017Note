#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

int main(){
	
	string n;
	int s;
	
	cin>>n>>s;
	
	for(int i=0; i<s; ++i){
		
		int j=0;
		
		while(j<n.length() && n[j]<=n[j+1]) j++;
		n.erase(j,1);
		
	}
	
	while(n.length()>1 && n[1] == '0') 
	n.erase(1,1);
	
	cout<<n;
	
	return 0;
	
}
