#include <iostream>
using namespace std;

int main(){

	int T;
	int N;
	long long dp[101];
	cin>>T;
	int i=1,j=1;

	dp[1]=1;
	dp[2]=1;
	dp[3]=1;
	dp[4]=2;
	
	for(i=5;i<=101;i++){
		dp[i]=dp[i-3]+dp[i-2];
	}

	for(i=1;i<=T;i++){
		cin>>N;
		cout<<dp[N]<<endl;
	}

	return 0;
}

		
