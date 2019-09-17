#include <iostream>
#include <vector>
using namespace std;

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
	int temp=0;
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			//가로 막대기
			if(j+3<M){
				temp=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i][j+3];
				if(ans<temp)
					ans=temp;
			}
			//세로 막대기
			if(i+3<N){
				temp=arr[i][j]+arr[i+1][i]+arr[i+2][j]+arr[i+3][j];
				if(ans<temp)
					ans=temp;
			}
			//사각형
			if(j+1<M && i+1<N){
				temp=arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+1][j+1];
				if(ans<temp)
					ans=temp;
			}
			//ㄴ 밑에 짧은거
			if(i+2<N && j+1<M){
				temp=arr[i][j]+arr[i+1][j]+arr[i+2][j]+arr[i+2][j+1];
				if(ans<temp)
					ans=temp;
			}
			//:---
			if(j+2<M && i+1<N){
				temp=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j];
				if(ans<temp)
					ans=temp;
			}
			//_:
			if(j-1>=0 && i+2<N){
				temp=arr[i+2][j-1]+arr[i][j]+arr[i+1][j]+arr[i+2][j];
				if(ans<temp)
					ans=temp;
			}
			//:ㅡ
			if(j+2<M && i+1<N){
				temp=arr[i][j]+arr[i+1][j]+arr[i+1][j+1]+arr[i+1][j+2];
				if(ans<temp)
					ans=temp;
			}

			if(j-2>=0 && i+1<N){
				temp=arr[i+1][j-2]+arr[i+1][j-1]+arr[i+1][j]+arr[i][j];
				if(ans<temp)
					ans=temp;
			}
			if(i+1>N && j+2<M){
				temp=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+2];
				if(ans<temp)
					ans=temp;
			}

			if(j+1<M && i+2<N){
				temp=arr[i][j]+arr[i][j+1]+arr[i+1][j]+arr[i+2][j];
				if(ans<temp)
					ans=temp;
			}
			if(i+2<N && j+1<M){
				temp=arr[i][j]+arr[i][j+1]+arr[i+1][j+1]+arr[i+2][j+1];
				if(ans<temp)
					ans=temp;
			}
			//ㅡ:-
			if(i+2<N && j+1<M){
				temp=arr[i][j]+arr[i+1][j]+arr[i+1][j+1]+arr[i+2][j+1];
				if(ans<temp)
					ans=temp;
			}

			if(i+1<N && j+2<M){
				temp=arr[i+1][j]+arr[i+1][j+1]+arr[i][j+1]+arr[i][j+2];
				if(ans<temp)
					ans=temp;
			}

			if(i+2<N && j+1<M){
				temp=arr[i][j+1]+arr[i+1][j]+arr[i+1][j+1]+arr[i+2][j];
				if(ans<temp)
					ans=temp;
			}
			if(j-2>=0 && i+1<N){
				temp=arr[i+1][j-2]+arr[i+1][j-1]+arr[i][j-1]+arr[i][j];
				if(ans<temp)
					ans=temp;
			}

			if(i-1>=0 && j+2<M){
				temp=arr[i][j]+arr[i-1][j]+arr[i][j+1]+arr[i][j+2];
				if(ans<temp)
					ans=temp;
			}
			if(j-1>=0 && i+2<N){
				temp=arr[i][j]+arr[i+1][j]+arr[i+1][j-1]+arr[i+2][j-1];
				if(ans<temp)
					ans=temp;
			}

			if(i+1<N && j+2<M){
				temp=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1];
				if(ans<temp)
					ans=temp;
			}
			if(i+2<N && j-1>=0){
				temp=arr[i+1][j-1]+arr[i][j]+arr[i+1][j]+arr[i+2][j];
				if(ans<temp)
					ans=temp;
			}

		}
	}

	cout<<ans<<endl;
					

}
