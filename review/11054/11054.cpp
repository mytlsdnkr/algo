#include <iostream>
using namespace std;

int main(){
	int A[1001];
	int dp[1001];
	int dp1[1001];
	int i=0;
	int j=0;
	int max=0;
	int N;
	cin>>N;

	for(i=0;i<N;i++){
		cin>>A[i];
	}

	//LIS
	
	for(i=0;i<N;i++){
		dp[i]=1;
		for(j=0;j<i;j++){
			if(A[j]<A[i] && dp[i]<dp[j]+1)
				dp[i]=dp[j]+1;
		}
	}

	//LDS

	for(i=N-1;i>=0;i--){
		dp1[i]=1;
		for(j=i+1;j<N;j++){
			if(A[j]<A[i] && dp1[i]<dp1[j]+1)
				dp1[i]=dp1[j]+1;
		}
	}
	//Bitonic

	for(i=0;i<N;i++){
		if(max<dp1[i]+dp[i]-1){
			max=dp1[i]+dp[i]-1;
		}
	}

	cout<<max<<endl;
	return 0;

}
