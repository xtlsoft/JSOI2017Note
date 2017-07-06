#include <iostream>

using namespace std;

int main(){
	
	int fw[500005] = {0};
	int n,m,tmp,t=0;
	
	cin>>n>>m;
	
	for(int i=1; i<=n; ++i){
		cin>>tmp;
		fw[tmp] = 1;
	}
	
	for(int i=1; i<=m; ++i){
		cin>>tmp;
		if(fw[tmp]) ++t;
	}
	
	cout<<t;
	
	return 0;
	
}
