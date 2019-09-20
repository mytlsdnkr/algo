#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int N;
	cin>>N;
	int i=0;

	vector<int> arr(N);
	for(i=0;i<N;i++)
		cin>>arr[i];

	int max=-9999;
	int sum=0;
	sort(arr.begin(),arr.end());

	do{
		for(i=0;i<N-1;i++){
			sum+=abs(arr[i]-arr[i+1]);
		}
		if(max<sum)
			max=sum;
		sum=0;
	}while(next_permutation(arr.begin(),arr.end()));

	cout<<max<<endl;






}
