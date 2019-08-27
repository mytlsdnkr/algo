#include <iostream>
using namespace std;

int main(){
	int N;
	int t,i,j;
	int dp[12]={0,};
	cin>>t;
	for(i=0;i<t;i++){
		cin>>N;
		dp[0]=1;
		dp[1]=1;
		dp[2]=2;

		for(j=3;j<=N;j++){
			dp[j]=dp[j-3]+dp[j-2]+dp[j-1];
		}

		cout<<dp[N]<<endl;

		for(j=0;j<12;j++){
			dp[j]=0;
		}
	}

	return 0;


}
