#include <iostream>
using namespace std;

int main(){
int arr[10]={5,6,5,6,7,10,11,10,12,17};
int freq[ 10];
fill_n(freq,10,-1);
for (int k : freq) cout<<k<<endl ;

for(int i=0;i<10;i++){
        int q=1;
    for (int j=i+1;j<=10;j++){
        if (arr[i]==arr[j])  {q++ ;freq[j]=0 ; }
        if (freq[i]!=0) freq[i]=q;
        }}
    for (int t=0;t<10;t++)
        if ( freq[t]==1) cout << arr[t]<<"unique number"<<"--index"<<t<<endl;

for (int k : freq)
cout<<k<<endl ;
return 0;
}
