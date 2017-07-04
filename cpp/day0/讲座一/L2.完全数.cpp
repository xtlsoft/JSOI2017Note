#include <iostream>

using namespace std;

int main(){
    int t = 0;
    for(int i=1; i<=1000; ++i){
        t=0;
        for (int j=0; j < (i/2); j++)
        {
            for(int k=j; k<= i; k++){
                if( j * k == i){
                    if(k!=j && k != i) t+=j+k;
                    else t+=j;
                    //cout<<"i="<<i<<" j="<<j<<" k="<<k<<" t="<<t<<endl;
                }
            }
        }
        if( t == i ){
            cout<<i<<endl;
        }
    }

    return 0;

}
