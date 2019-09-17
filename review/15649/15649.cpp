#include <iostream>
#include <vector>
using namespace std;
int arr[10];
int check[10];

void recursive(int index, int N, int M){
	int i=1;
	if(index==M+1){
		for(i=1;i<=M;i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
		return ;
	}
	for(i=1;i<=N;i++){
		if(check[i])
			continue;
		check[i]=true;
		arr[index]=i;
		recursive(index+1,N,M);
		check[i]=false;
		arr[index]=0;

	}

	return ;


}


int main(){
	int N,M;
	cin>>N>>M;
	recursive(1,N,M);

}
