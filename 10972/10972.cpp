#include <iostream>
#include <algorithm>
using namespace std;

int arr[10001];

int main(){
	int N;
	cin>>N;
	int i=1;
	bool last;
	for(i=1;i<=N;i++)
		cin>>arr[i];

	i=N;
	while(1){
		if
		if(arr[i]<arr[i-1])
			continue;
		else{
			swap(arr[i],arr[i-1]);
		}
		i--;
		
	}

	for(i=1;i<=N;i++){
		cout<<arr[i]<<" ";
	}






}
