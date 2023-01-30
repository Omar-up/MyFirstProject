#include <bits/stdc++.h>
using namespace std;

int main() {
string ch1,ch2;
int k=0;


cout <<"enter first word"<<endl;
getline(cin,ch1);
int freq[ch1.size()];
fill_n(freq,ch1.size(),-1);
//cout <<"enter second word"<<endl;
//getline(cin,ch2);
for (int i =0 ; i<ch1.size()-1;i++){
        int x=1;
    for (int j=i+1;j<ch1.size();j++)  {
        if (ch1.at(j)==ch1.at(i)) {freq[j]=0; x++;}
        freq[i]=x;}
}
int ma=*max_element(freq,freq+ch1.size());
for (int h=0;h<ch1.size();h++) {
        if (freq[h]==ma) cout <<ch1.at(h)<<endl;}

return 0 ;
}
