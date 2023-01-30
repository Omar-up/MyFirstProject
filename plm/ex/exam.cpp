#include<bits/stdc++.h>
using namespace std;

int main() {
string T[]={"the","here","dog","the","dog"};

//for (string k :T) cout<<k<<endl;
int n=sizeof(T)/sizeof(*T);
int freq[n];
fill_n(freq,n,-1);
//for (int j :freq) cout<<j<<endl;
for (int i=0;i<n;i++){
int x=1;
    for (int j=i+1;j<n;j++)
if (T[i]==T[j]) {freq[j]=0 ;x++;}
freq [i]=x;}
//for (int j :freq) cout<<j<<endl;
int ma=*max_element(freq,freq+n);
for (int z=0;z<n;z++){
    if(freq[z]==ma) cout<< T[z];}




}
