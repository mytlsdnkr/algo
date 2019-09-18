#include <iostream>
using namespace std;

int arr[10];
int check[10];

void recursive(int index, int start, int N, int M){
	int i=0;
	if(index==M){
		for(i=0;i<M;i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
		return ;
	}

	for(i=start;i<=N;i++){
		if(check[i])
			continue;
		check[i]=true;
		arr[index]=i;
		recursive(index+1,i+1,N,M);
		check[i]=false;
	}

}






int main(){
	int N,M;
	cin>>N>>M;
	recursive(0,1,N,M);
}
