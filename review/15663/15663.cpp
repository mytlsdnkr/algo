#include <iostream>
#include <algorithm>
using namespace std;

int arr[10];
int res[10];
int cnt[10];

void recursive(int index, int N, int M){
	int i=0;
	if(index==M){
		for(i=0;i<M;i++){
			cout<<res[i]<<" ";
		}
		cout<<"\n";
		return ;
	}

	for(i=0;i<N;i++){
		if(cnt[i]>0){
			cnt[i]-=1;
			res[index]=arr[i];
			recursive(index+1,N,M);
			cnt[i]+=1;
		}
	}



}


int main(){
	int N,M;
	int temp[10];
	cin>>N>>M;
	int i=0;
	for(i=0;i<N;i++){
		cin>>temp[i];
	}
	sort(temp,temp+N);
	int k=0;
	int count=1;
	int num=temp[0];
	for(i=1;i<N;i++){
		if(num==temp[i])
			count++;
		else{
			arr[k]=num;
			cnt[k++]=count;
			num=temp[i];
			count=1;
		}
	}
	arr[k]=num;
	cnt[k++]=count;
	N=k;
	recursive(0,N,M);

}


