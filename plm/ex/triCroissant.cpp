#include <iostream>
using namespace std;

//int echange(int *x,int *y){
//int a=*x;
//*x=*y;
//*y=a;
//}
int main (){
int arr[5]={5,3,4,2,1};

for(int i=0;i<5;i++){

               for(int j=i+1;j<5;j++)

                                        if (arr[i]>arr[j])  swap(arr[i],arr[j]);
}
for (int r =0;r<5;r++)
    cout <<arr[r]<<endl;
return 0;

}
