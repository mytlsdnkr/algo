#include <iostream>
#include <algorithm>
using namespace std;

int num[10];
int arr[10];

void recursive(int index,int start,int count, int N , int M){
	int i=0;
	if(index==M){
		for(i=0;i<M;i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
		return ;
	}

	for(i=start;i<N;i++){
		arr[index]=num[i];
		if(count==M){
			recursive(index+1,i+1,0,N,M);
		}else{
			recursive(index+1,i,count+1,N,M);
		}



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
	recursive(0,0,0,N,M);
}
