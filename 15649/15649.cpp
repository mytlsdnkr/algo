#include <iostream>
#include <vector>
using namespace std;


int main(){
	int N,M;
	cin>>N>>M;

	vector<int> arr(N);
	for(int i=0;i<N;i++){
		arr[i]=i+1;
	}

	if(M==1){
		for(int i=0;i<N;i++){
			cout<<arr[i]<<endl;
		}
		return 0;
	}








}
