#include <iostream>

using namespace std;

int main(){
	
	long long h[50001], t2, t3, t5, t7,minn;
	int n;
	cin>>n;
	h[1] = 1; t2=1; t3=1; t5=1; t7=1;
	for(int i=2; i<=n; i++){
		minn = h[t2]*2;
		if(minn>h[t3]*3) minn=h[t3]*3;
		if(minn>h[t5]*5) minn=h[t5]*5;
		if(minn>h[t7]*7) minn=h[t7]*7;
		h[i]=minn;
		if(minn==h[t2]*2) t2++;
		if(minn==h[t3]*3) t3++;
		if(minn==h[t5]*5) t5++;
		if(minn==h[t7]*7) t7++;
	}
	cout<<h[n];
	
	return 0;
	
}
