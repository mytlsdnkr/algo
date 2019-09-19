#include <iostream>
#include <algorithm>
using namespace std;

int cnt[10];
int arr[10];
int res[10];

void recursive(int index,int start, int N, int M){
	int i=0;
	if(index==M){
		for(i=0;i<M;i++){
			cout<<res[i]<<" ";
		}
		cout<<"\n";
		return ;
	}

	for(i=start;i<N;i++){
		if(cnt[i]>0){
			cnt[i]-=1;
			res[index]=arr[i];
			recursive(index+1,i,N,M);
			cnt[i]+=1;
		}
	}



}


int main(){
	int N,M;
	cin>>N>>M;
	int temp[10];
	int i=0;
	for(i=0;i<N;i++)
		cin>>temp[i];

	sort(temp,temp+N);

	int count=1;
	int k=0;
	int num=temp[0];
	for(i=1;i<N;i++){
		if(num==temp[i])
			count++;
		else{
			arr[k]=num;
			num=temp[i];
			cnt[k++]=count;
			count=1;
		}
	}

	arr[k]=num;
	cnt[k++]=count;
	N=k;
	recursive(0,0,N,M);
}
