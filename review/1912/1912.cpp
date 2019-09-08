#include <iostream>
#define max(a,b) (((a)>(b)) ? (a):(b))
using namespace std;

int main(){
	int A[100001];
	int dp[100001];
	int N;
	int i=0,j=0;
	cin>>N;
	for(i=1;i<=N;i++){
		cin>>A[i];
	}
	dp[1]=A[1];

	for(i=2;i<=N;i++){
		dp[i]=max(dp[i-1]+A[i],A[i]);

	}

	int sum=0;
	for(i=1;i<=N;i++){
		if(dp[i]>sum)
			sum=dp[i];
	}

	cout<<sum<<endl;

	return 0;





}
