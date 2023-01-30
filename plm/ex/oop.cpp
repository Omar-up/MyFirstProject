#include<bits/stdc++.h>
using namespace std;

class Person{
private:
    string name ="unkown";
    int age=0;
public:
    string getname(){ return name ;}
    int  getage  (){return age ;}

        void setname(string newname){
    name =newname ;}
        void setage (int newage){
        age=newage;
        }

    Person( int agevalue)//parameter constractor
    {
        cout <<"constractor with 1 parameter"<<endl;
        setage(agevalue);}

    Person(string namevalues ,int agevalues )//parameter constractor
    {
   cout <<"constractor with two parameter"<<endl;
   setage(agevalues);
   setname(namevalues) ;}

   Person(Person &personObj)//copy constractor

   {
       cout <<"copy constructor" <<endl;
       setage(personObj.getage());
       setname(personObj.getname());

   }


void printData(){

cout <<"Name:"<<name <<endl<<"Age:"<<age; }


};
int main () {


Person oob(17);//creating object via parametr constractor
Person oox("omar",17);
Person oov(oox);//creating object via copy constractor

oob.printData ();
cout <<endl;
oox.printData();
cout<<"------"<<endl;
oov.printData();


}
