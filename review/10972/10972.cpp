#include <iostream>
#include <algorithm>
using namespace std;

int arr[10001];

bool next_permutation(int N){
	int i=N-1;
	bool last=false;
	int j;

	for(i;i>=1;i--){
		if(arr[i-1]<arr[i]){
			if(i==N-1){
				swap(arr[i],arr[i-1]);
			}else{
				int index=i;
				for(j=i;j<N;j++){
					if(arr[i]>arr[j] && arr[i-1]<arr[j]){
						index=j;
					}
				}
				swap(arr[i-1],arr[index]);
				reverse(arr+i,arr+N);
			}
			last=false;
			break;
		}else{
			last=true;
		}
	}

	return last;
}

int main(){
	int N;
	cin>>N;
	int i=1;
	bool last;
	for(i=0;i<N;i++)
		cin>>arr[i];
	if(next_permutation(N) || N==1){
		cout<<-1<<"\n";
		return 0;
	}

	for(i=0;i<N;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}
