#include <iostream>
#include <algorithm>
using namespace std;

int arr[10];
int num[10];
//bool check[10];

/*void recursive(int index, int start, int N, int M){
	int i=0;
	if(index==M){
		for(i=0;i<M;i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
		return ;
	}

	for(i=start;i<N;i++){
		if(check[i])
			continue;
		check[i]=true;
		arr[index]=num[i];
		recursive(index+1,i+1,N,M);
	}




}
*/
void recursive1(int index, int selected, int N, int M){
	int i=0;
	if(selected==M){
		for(i=0;i<M;i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
		return ;
	}
	if(index>=N)
		return ;
	arr[selected]=num[index];
	recursive1(index+1,selected+1,N,M);
	arr[selected]=0;
	recursive1(index+1,selected,N,M);
}

int main(){
	int N,M;
	cin>>N>>M;
	int i=0;
	for(i=0;i<N;i++){
		cin>>num[i];
	}
	sort(num,num+N);
	//recursive(0,0,N,M);
	recursive1(0,0,N,M);
}
