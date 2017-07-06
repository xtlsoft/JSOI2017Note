#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	int n, r;
	
	cin>>n>>r;
	
	int s[9999] = {0};
	int a[9999] = {0};
	
	for(int i=1; i<=n; i++){
		cin>>a[i];
	}
	sort(a+1,a+(n+1));
	
	int j=0, minx=0;
	
	for (int i=1; i<=n; i++){
		j++;
		if(j%(r+1) == 0) j=1;
		s[j] = s[j]+a[i];
		minx+=s[j];
	}
	
	cout<<minx;
	
	return 0;
	
}
