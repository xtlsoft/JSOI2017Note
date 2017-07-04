#include <iostream>

using namespace std;

int main(){
    
    int a=0, minn=0, maxn=0, tmp=0;
    cin>>a;

    minn = a/2+1;

    for (int i=0; i <= a/2; i++)
    {
        tmp = i + (a-2*i)/4;
        if(tmp > maxn)  maxn = tmp;
        else if(tmp < minn) minn = tmp;
    }

    cout<<"min: "<<minn<<endl<<"max: "<<maxn<<endl;

}