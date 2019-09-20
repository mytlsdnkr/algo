#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){


	while(1){
		int k;
		cin>>k;
		vector<int> arr(k);
		vector<int> used;
		vector<vector<int>> answer;
		int i=0;
		int s=0;
		if(k==0)
			break;

		for(i=0;i<k;i++){
			cin>>arr[i];
		}

		for(i=0;i<(k-6);i++){
			used.push_back(0);
		}

		for(i=0;i<6;i++){
			used.push_back(1);
		}


		do{
			vector<int> temp;
			for(i=0;i<k;i++){
				if(used[i]==1){
					temp.push_back(arr[i]);
				}
			}
			answer.push_back(temp);
		}while(next_permutation(used.begin(),used.end()));
		sort(answer.begin(),answer.end());

		for(auto &v : answer){
			for(i=0;i<v.size();i++){
				cout<<v[i]<<" ";
			}
			cout<<"\n";
		}
		cout<<"\n";

	}
}
