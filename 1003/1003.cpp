#include <iostream>
using namespace std;

void fibo(int num){
    int dp[41];
    dp[0]=0;
    dp[1]=1;
    int i;
    for(i=2;i<41;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[num-1]<<" "<<dp[num]<<endl;
    
}
int main(){
    int testcase,i,num;
    cin>>testcase;
    for(i=0;i<testcase;i++){
        cin>>num;
        if(num>40 || num<0)
            return 0;
        if(num==0){
            cout<<1<<" "<<0<<endl;
            continue;
        
    }
        if(num==1){
            cout<<0<<" "<<1<<endl;
            continue;
        }
        fibo(num);

}

return 0;
}

