#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int N;
	cin>>N;

	vector<int> arr(N);

	int i=0;
	for(i=0;i<N;i++){
		arr[i]=i+1;
	}

	do{
		for(i=0;i<N;i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}while(next_permutation(arr.begin(),arr.end()));




}
