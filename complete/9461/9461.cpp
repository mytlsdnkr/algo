#include <iostream>
using namespace std;

int main(){
   long triangle[101];
   int testcase;
   int length;
   int i;

   cin>>testcase;
   triangle[1]=1;
   triangle[2]=1;
   triangle[3]=1;
   triangle[4]=2;

   for(i=5;i<=100;i++){
       triangle[i]=triangle[i-3]+triangle[i-2];
   }
   for(i=0;i<testcase;i++){
       cin>>length;
       if(length<1 || length>100)
           return 0;
       cout<<triangle[length]<<endl;
   }

   return 0;

   
}
