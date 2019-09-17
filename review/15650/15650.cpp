#include <iostream>
using namespace std;

int arr[10];
bool check[10];

void recursive(int index,int N, int M){
	int i=0;
	if(index==M){
		for(i=0;i<M;i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
		return ;
	}

	for(i=1;i<=N;i++){
		if(check[i])
			continue;
		check[i]=true;
		if(index>=1){
			if(arr[index-1]>i){
				check[i]=false;
				continue;
			}
		}
		arr[index]=i;
		recursive(index+1,N,M);
		check[i]=false;
		arr[i]=0;
	}
}
int main(){
	int N,M;
	cin>>N>>M;
	recursive(0,N,M);
}
