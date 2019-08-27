#include <iostream>
using namespace std;


int main(){
	int N;
	int dp[1000001];
	int i;
	for(i=0;i<=1000001;i++){
		dp[i]=0;
	}
	cin>>N;
	dp[1]=0;

	for(i=2;i<=N;i++){
		dp[i]=dp[i-1]+1;
		if(i%3==0 && dp[i]>dp[i/3]+1){
			dp[i]=dp[i/3]+1;
		}
		if(i%2==0 && dp[i]>dp[i/2]+1){
			dp[i]=dp[i/2]+1;
		}
	}
	cout<<dp[N]<<endl;
	return 0;

}
