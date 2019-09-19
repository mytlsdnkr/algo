#include <iostream>
#include <algorithm>
using namespace std;

int res[10];
int input[10];
bool check[10];

void recursive(int index,int start,int N, int M){
	int i=0;
	if(index==M){
		for(i=0;i<M;i++){
			cout<<res[i]<<" ";
		}
		cout<<"\n";
		return ;
	}

	for(i=start;i<N;i++){
		res[index]=input[i];
		recursive(index+1,i,N,M);
	}
}


int main(){
	int N,M;
	cin>>N>>M;
	int temp[10];
	int i=0;
	for(i=0;i<N;i++){
		cin>>temp[i];
	}
	sort(temp,temp+N);
	int k=0;
	for(i=0;i<N;i++){
		if(i>0 && temp[i]==temp[i-1]){
			continue;
		}
		input[k++]=temp[i];
	}
	N=k;
	recursive(0,0,N,M);
}

