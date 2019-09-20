#include <iostream>
#include <algorithm>
using namespace std;

int arr[10];
int num[10];

void recursive(int index,int N, int M){
	int i=0;
	if(index==M){
		for(i=0;i<M;i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
		return ;
	}
	int k=0;

	for(k=0;k<N;k++){
		arr[index]=num[k];
		recursive(index+1,N,M);
	}
}


int main(){
	int N,M;
	cin>>N>>M;
	int i=0;
	for(i=0;i<N;i++){
		cin>>num[i];
	}
	sort(num,num+N);
	recursive(0,N,M);

}