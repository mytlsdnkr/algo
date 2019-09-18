#include <iostream>
#include <algorithm>
using namespace std;


int arr[10];
int num[10];
bool check[10];
void recursive(int index, int N, int M){
	int i=0;
	if(index==M){
		for(i=0;i<M;i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
		return ;
	}

	for(i=0;i<N;i++){
		if(check[i])
			continue;
		check[i]=true;
		arr[index]=num[i];
		recursive(index+1,N,M);
		check[i]=false;
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
