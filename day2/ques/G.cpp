#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;

struct values{
	int i;
	double value;
};

int my_comp(const values &a, const values &b){
	return a.value>b.value;
}

int main(){
	
	int k,countt=0;
	double out[102];
	cin>>k;
	
	for(int ppp=0; ppp<k; ++ppp){
		int w,s;
		double t=0.0;
		double n[102],v[102];
		cin>>w>>s;
		values value[102];
		for(int i=0; i<s; ++i){
			cin>>n[i]>>v[i];
			value[i].i = i;
			value[i].value = v[i] / n[i];
		}
		sort(value+0,value+s,my_comp);
		for(int i=0; i<s; ++i){
			int c = value[i].i;
			int zh = n[c];
			if(zh < w){
				w -= zh;
				t += v[c];
			}else{
				t += w*value[i].value;
				break;
			}
		}
		out[countt] = t;
		++countt;
	}
	
	for(int i=0; i<countt; ++i){
		cout<<fixed<<setprecision(2)<<out[i]<<endl;
	}
	
	return 0;
	
}
