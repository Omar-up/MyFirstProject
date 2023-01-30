#include <bits/stdc++.h>

using namespace std;

int main(){
int T[5],n,j,ma=0,mi=100;

for (int i=0;i<5;i++)
    cin>> T[i];
//    for (int i=0;i < (sizeof(T)/sizeof(*T));i++)
//        {
//        if (T[i]>ma) { ma=T[i];}
//         if (T[i]<mi) { mi=T[i];}
//    }

        cout <<"min values is " <<*min_element(T,T+4)<<endl;
        cout <<"max values is "<<*max_element(T,T+4)<<endl;


}
