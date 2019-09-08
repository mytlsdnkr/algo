#include <iostream>
#define max(a,b) (((a)>(b))?(a):b)
using namespace std;


int main(){
    int dp[100001][3];
    int A[100001][2];
    int T,N;
    int i=0,j=0;

    cin>>T;
    for(i=0;i<T;i++){
        cin>>N;
        for(j=1;j<=N;j++){
            cin>>A[j][0];
        }
        for(j=1;j<=N;j++){
            cin>>A[j][1];
        }
        dp[0][0]=dp[0][1]=dp[0][2]=0;

        for(int k=1;k<=N;k++){
            dp[k][0]=max(dp[k-1][0],max(dp[k-1][1],dp[k-1][2]));
            dp[k][1]=max(dp[k-1][0],dp[k-1][2])+A[k][0];
            dp[k][2]=max(dp[k-1][0],dp[k-1][1])+A[k][1];
        }
        long long sum=0;
        for(int k=1;k<=N;k++){
            sum=max(max(sum,dp[k][0]),max(dp[k][1],dp[k][2]));
        }
        cout<<sum<<endl;
    }
    return 0;

}