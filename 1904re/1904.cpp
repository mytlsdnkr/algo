#include <iostream>
using namespace std;

int main(){
    int dp[1000001];
    int sizeOftile;
    int i;
    dp[0]=0;
    dp[1]=1;
    dp[2]=2;
    
    cin>>sizeOftile;
    if(sizeOftile>1000000)
        return 0;

    for(i=3;i<=sizeOftile;i++){
        dp[i]=(dp[i-1]+dp[i-2])%15746;
    }

    cout<<dp[sizeOftile]<<endl;

    return 0;

}
