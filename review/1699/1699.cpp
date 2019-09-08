#include <iostream>
#define min(a,b) a>b ? a : b
using namespace std;

int main(){
	int dp[100001];
	int N;
	cin>>N;
	int i=1,j=1;
	dp[0]=0;

	for(i=1;i<=N;i++){
		dp[i]=i;
		for(j=1;j*j<=i;j++){
			if(dp[i-j*j]+1<dp[i])
				dp[i]=dp[i-j*j]+1;
		}
	}

	cout<<dp[N]<<endl;

	return 0;

			






}
