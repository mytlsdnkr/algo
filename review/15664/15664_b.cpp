#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> res;
int input[10];
int arr[10];

void recursive(int index, int start, int N, int M){
	vector<int> temp;
	int i=0;
	if(index==M){
		for(i=0;i<M;i++)
			temp.push_back(arr[i]);
	res.push_back(temp);
	return ;
	}


	for(i=start;i<N;i++){
		arr[index]=input[i];
		recursive(index+1,i+1,N,M);
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
	recursive(0,0,N,M);
	sort(res.begin(),res.end());
	res.erase(unique(res.begin(),res.end()),res.end());

	for(auto &v : res){
		for(i=0;i<M;i++){
			cout<<v[i]<<" ";
		}
		cout<<"\n";
	}

}
