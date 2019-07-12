#include <iostream>
using namespace std;

int main(){
    int num,num1;

    cin>>num>>num1;

    if(num>num1){
        cout<<">"<<endl;
    }else if(num<num1){
        cout<<"<"<<endl;
    }else if(num==num1){
        cout<<"=="<<endl;
    }

    return 0;
    
}
