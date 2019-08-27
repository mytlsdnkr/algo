#include <iostream>
using namespace std;


int main(){
	int dp[1001];
	int N;
	cin>>N;
	int i=0;

	if(N<1 || N>1000)
		return 0;

	for(i=1;i<=1001;i++){
		dp[i]=0;
	}

	dp[1]=1;
	dp[2]=2;

	for(i=3;i<=N;i++){
		dp[i]=(dp[i-1]+dp[i-2]);
	}
	

	cout<<dp[N]%10007<<endl;
	return 0;


}
