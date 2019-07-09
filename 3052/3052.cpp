#include <iostream>
using namespace std;

int main(){
    int i,j;
    int count=0;
    int num[10];
    bool flag=false;
    for(i=0;i<10;i++){
        cin>>num[i];
        if(num[i]>1000 || num[i]<0)
            return 0;
            num[i]=num[i]%42;
        for(j=0;j<i;j++){
            if(num[i]==num[j]){
                flag=true;
                break;
            }else{
                flag=false;
                
            }


        }
        if(!flag){
            count++;
        }
        flag=false;


    }
    cout<<count<<endl;
}


