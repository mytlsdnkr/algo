#include <iostream>
/*#define MAX_NUM 10000
#define ERR_NUM -1
#define SIZE_ERR -2
*/
using namespace std;

int main(){
    int M,N;
    long int sum=0;
    int min=-1;
    int i=0,j=0;
    bool flag=false;
    bool primeExisted=false;
    cin>>M>>N;
/*    if(M>N)
        return SIZE_ERR;

    if(M>MAX_NUM || N>MAX_NUM){
        return ERR_NUM;
    }
*/
    if(N==2){
        cout<<2<<endl;
        cout<<2<<endl;
        return 0;
    }
    
    for(i=M;i<=N;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                flag=false;
                break;
            }
            else{
                flag=true;
            }
        }
        if(flag){
            primeExisted=true;
            sum+=i;
            if(min==-1)
                min=i;
        }
        flag=false;
    }



    if(!primeExisted){
        cout<<-1<<endl;
    }else{
        cout<<sum<<endl;
        cout<<min<<endl;
    }

    return 0;



}
