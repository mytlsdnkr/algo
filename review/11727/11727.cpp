#include <iostream>
using namespace std;

int main(){
	int dp[1001]={0,};

	int N;
	cin>>N;
	int i=0;
	if(N<1 || N>1000)
		return 0;
	dp[1]=1;
	dp[2]=3;


	for(i=3;i<=N;i++){
		dp[i]=(dp[i-1]+(2*dp[i-2]))%10007;
	}

	cout<<dp[N]<<endl;
	return 0;






}
