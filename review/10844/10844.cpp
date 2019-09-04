#include <iostream>
using namespace std;

int main(){
	long long dp[101][11];
	int N,i,j;
	cin >> N;
	int mod=1000000000;
	long long ans=0;

	for(i=1;i<=9;i++){
		dp[1][i]=1;
	}
	if(N==1){
		cout<<9<<endl;
		return 0;
	}

	for(i=2;i<=N;i++){
		for(j=0;j<=9;j++){
			dp[i][j]=0;
			if(j-1>=0){
				dp[i][j]+=dp[i-1][j-1];
			}
			if(j+1<=9){
				dp[i][j]+=dp[i-1][j+1];
			}
			dp[i][j]%=mod;
		}

	}

	for(i=0;i<=9;i++){
		ans+=dp[N][i];
	}
	ans%=mod;

	cout<<ans<<endl;

	return 0;

}
