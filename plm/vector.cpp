#include <iostream>
#include<vector>

 using namespace std;

  int main() {
  vector<int> values;
  vector<int>::iterator it;
values.push_back(2);
values.push_back(4);
values.push_back(6);
values.pop_back();
//for(vector<int>::iterator it =values.begin();it !=values.end();it++){
for (it=values.begin();it != values.end();it ++){
    if (*it==4){
        values.insert(it+1,5);
        //values.erase(it);
        break;
    }}
for(int i=0;i<values.size();i++)
    cout <<values.at(i)<<endl;
  return 0;

  }
