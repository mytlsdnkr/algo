#include <iostream>
using namespace std;


int arr[10];

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
		arr[index]=i;
		recursive(index+1,N,M);
	}
}
int main(){
	int N,M;
	cin>>N>>M;

	recursive(0,N,M);
}
