#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


int main(){
	int N;
	cin>>N;
	vector<int> arr(N);
	int i=0;
	for(i=0;i<N;i++){
		cin>>arr[i];
	}
	if(next_permutation(arr.begin(),arr.end())){
		for(i=0;i<N;i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
		return 0;
	}

	cout<<-1<<"\n";



}
