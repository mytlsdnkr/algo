#include <iostream>
using namespace std;

int main(){
    int num,num1;
    int revNum=0;
    int revNum1=0;
    cin>>num>>num1;


        revNum+=(num%10)*100;
        num/=10;
        revNum+=(num%10)*10;
        num/=10;
        revNum+=(num%10);

        
        revNum1+=(num1%10)*100;
        num1/=10;
        revNum1+=(num1%10)*10;
        num1/=10;
        revNum1+=(num1%10);


        if(revNum>revNum1)
            cout<<revNum<<endl;
        else
            cout<<revNum1<<endl;


        return 0;
        


   

    
}
