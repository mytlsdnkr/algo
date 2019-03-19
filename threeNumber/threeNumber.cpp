#include <iostream>
using namespace std;

int main(){
    int num[3];
    int i,j;
    for(i=0;i<3;i++)
        cin>>num[i];

    int temp;
    for(i=0;i<2;i++){
        for(j=1;j<3;j++){
            if(num[i]>num[j]){
                temp=num[j];
                num[j]=num[i];
                num[i]=temp;
            }

        }
    }

    cout<<num[1]<<endl;

}
