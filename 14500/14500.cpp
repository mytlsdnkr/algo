#include <iostream>
#include <vector>
using namespace std;


int Bar(vector<vector<int>> &arr,int N, int M){
	int i=0,j=0;
	int temp=0;
	int ans=0;
	int k=0;
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			if(j+3>M)
				break;
			for(k=0;k<4;k++){
				temp+=arr[i][j+k];
			}
		}
		if(ans<temp)
			ans=temp;
		temp=0;
	}
	temp=0;

	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			if(j+3>N)
				break;
			for(k=0;k<4;k++){
				temp+=arr[j+k][i];
			}
		}
		if(ans<temp)
			ans=temp;
		temp=0;
	}
	return ans;

}





int main(){
	int N,M;
	cin>>N>>M;

	vector<vector<int>> arr;
	arr.assign(N,vector<int>(M,0));
	int i=0;
	int j=0;

	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			cin>>arr[i][j];
		}
	}
	int ans=0;
	int temp=Bar(arr,N,M);
	if(ans<temp)
		ans=temp;

	cout<<ans<<endl;
}
