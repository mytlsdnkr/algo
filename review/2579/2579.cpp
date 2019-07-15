#include <iostream>
using namespace std;

int max(int num, int num1){
    if(num>num1)
        return num;
    return num1;
}
int main(){
    int numofstairs;
    cin>>numofstairs;
    int *stairs=new int[numofstairs+1];
    int *dp=new int[numofstairs+1];
    int i;

    for(i=1;i<=numofstairs;i++){
        cin>>stairs[i];
    }
    dp[1]=stairs[1];
    dp[2]=max(stairs[2]+stairs[1],stairs[2]);
    dp[3]=max(stairs[1]+stairs[3],stairs[2]+stairs[3]);
    

    for(i=4;i<=numofstairs;i++){
        dp[i]=max(dp[i-3]+stairs[i]+stairs[i-1],dp[i-2]+stairs[i]);
    }

    cout<<dp[numofstairs]<<endl;

}
