#include <iostream>
using namespace std;

int main(){
    int target,i;
    int count=0;
    int result[100];
    int k=0;
    int temp;
    cin>>target;
    if(target>10000)
        return 0;

    i=666;
    while(1){
        temp=i;
        while(1){
            if(temp%10==6){
                result[k++]=temp%10;
                if(k>=3)
                    break;
            }else{
                k=0;
            }
            temp/=10;
            if(temp==0)
                break;
        }
        if(k>=3){
            count++;
            if(target==count){
                cout<<i<<endl;
                return 0;
            }
        }
        k=0;
        i++;

    }

}
