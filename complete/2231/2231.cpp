#include <iostream>
using namespace std;


int find_generator(int i){
    if(i<10)
        return i;
    int temp=i;
    int sum=0;
    
    while(1){
        if(temp/10==0){
            sum+=temp;
            break;
        }
        sum+=temp%10;
        temp/=10;

    }
    sum+=i;
    return sum;

}
int main(){
    int num;
    int i;
    int result;
    bool flag=false;
    cin>>num;

    if(num<1 || num>1000000)
        return 0;

    for(i=1;i<num;i++){
        result=find_generator(i);
        if(result==num){
            flag=true;
            break;
        }

    }
    if(flag)
        cout<<i<<endl;
    else
        cout<<0<<endl;

    return 0;



}


