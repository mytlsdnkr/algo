#include <iostream>
using namespace std;
	long long dp[201][201];
	long long mod=1000000000;
int main(){
	int N,K;
	int i;

	cin>>N>>K;

	dp[0][0]=1LL;

	for(i=1;i<=K;i++){
		for(int j=0;j<=N;j++){
			for(int l=0;l<=j;l++){
				dp[i][j]+=dp[i-1][j-l];
				dp[i][j]%=mod;
			}
		}
	}

	cout<<dp[K][N]<<endl;

	return 0;
}
