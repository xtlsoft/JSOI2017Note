#include <iostream>

using namespace std;

int main(){
    int n, t=0;
    cin>>n;

    for(int i=1; i<(n-1); ++i){
        for(int j=i; j<n; ++j){
            for(int k=j; k<=n; ++k){
                if(i+j+k == n && i+j>k && i+k>j && j+k>i){
                    ++t;
                    cout<<"i="<<i<<" j="<<j<<" k="<<k<<endl;
                }
            }
        }
    }

    cout<<(t);
    return 0;

}