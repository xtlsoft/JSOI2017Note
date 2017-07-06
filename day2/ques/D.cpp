#include <iostream>
#include <algorithm>

using namespace std;

int my_comp(const int &a, const int &b){
	return a>b;
}

int main(){
	
	int n,b,a[20000],t=0,tmp=0;
	cin>>n>>b;
	
	for(int i=0; i<n; ++i){
		cin>>a[i];
	}
	
	sort(a+0,a+n,my_comp);
	
	for(int i=0; i<n; ++i){
		tmp += a[i];
		++t;
		if(tmp >= b){
			cout<<t;
			return 0;
		}
	}
	
	return 0;
	
}
