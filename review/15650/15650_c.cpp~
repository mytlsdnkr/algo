#include <iostream>
using namespace std;

int arr[10];

void recursive(int index, int selected, int N, int M){
	int i=0;
	if(selected==M){
		for(i=0;i<M;i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
		return ;
	
	}
	if(index>N)
		return ;
		arr[selected]=index;
		recursive(index+1,selected+1,N,M);
		arr[selected]=0;
		recursive(index+1,selected,N,M);

}

int main(){
	int N,M;
	cin>>N>>M;

	recursive(1,0,N,M);

}


