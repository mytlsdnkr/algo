#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int input[10];
int arr[10];
vector<vector<int>> res;

void recursive(int index, int N, int M){
	vector<int> temp;
	int i=0;
	if(index==M){
		for(i=0;i<M;i++){
			temp.push_back(arr[i]);
		}
		res.push_back(temp);
		return ;
	}

	for(i=0;i<N;i++){
		arr[index]=input[i];
		recursive(index+1,N,M);
	}

}


int main(){
	int N,M;
	cin>>N>>M;
	
	int i=0;
	for(i=0;i<N;i++){
		cin>>input[i];
	}
	sort(input,input+N);
	recursive(0,N,M);
	sort(res.begin(),res.end());
	res.erase(unique(res.begin(),res.end()),res.end());
	
	for(i=0;i<res.size();i++){
		for(int j=0;j<M;j++){
			cout<<res[i][j]<<" ";
		}
		cout<<"\n";
	}
}

