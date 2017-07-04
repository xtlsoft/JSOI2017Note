#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int n, tmp, t;
    cin>>n;

    for(int i=pow(10,(n-1)); i<=(pow(10,n) -1); ++i){
        tmp = i;
        t = 0;
        while(tmp != 0){
            t += pow(tmp % 10, n);
            tmp /= 10;
        }
        if (t == i){
            cout<<i<<endl;
        }
    }

    return 0;
}