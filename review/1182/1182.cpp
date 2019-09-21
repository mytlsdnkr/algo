#include <iostream>
#include <vector>
using namespace std;


int main(){
	int N,S;
	cin>>N>>S;

	int i=0;
	vector<int> arr(N);

	for(i=0;i<N;i++){
		cin>>arr[i];
	}

	int sum=0;
	int ans=0;

	for(i=1;i<(1<<N);i++){
		int sum=0;
		for(int k=0;k<N;k++){
			if(i&(1<<k)){
				sum+=arr[k];
			}

		}
			if(sum==S)
				ans++;
	}

	cout<<ans<<"\n";





}
