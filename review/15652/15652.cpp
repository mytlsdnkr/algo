#include <iostream>
using namespace std;

int arr[10];

void recursive(int index, int start,int count, int N, int M){
	int i=0;
	if(index==M){
		for(i=0;i<M;i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}

	for(i=start;i<=N;i++){
		arr[index]=i;
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

	recursive(0,1,0,N,M);




}
