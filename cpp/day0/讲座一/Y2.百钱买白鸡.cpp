#include <iostream>

using namespace std;

int main(){

    int total = 0;

    for (int i=0; i <= 33; i++)
    {
        for(int j=0; j<=100; ++j){
            for(int k=0; k<=300; ++k){
                if (i+j+k == 100 && (i*3+j+k/3.0) == 100)
                {
                    total += 1;
                }
            }
        }
    }

    cout<<total<<endl;

    return 0;

}