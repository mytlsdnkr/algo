#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> edge[20001];
int color[20001];

void dfs(int index, int c){
	color[index]=c;

	for(int i=0;i<edge[index].size();i++){
		int next=edge[index][i];
		if(color[next]==0){
			dfs(next,3-c);
		}
	}

}

int main(){
	int t;
	cin>>t;
	while(t--){
		int V,E;
		cin>>V>>E;
		for(int i=1;i<=V;i++){
			edge[i].clear();
			color[i]=0;
		}
		for(int i=0;i<E;i++){
			int from, to;
			cin>>from>>to;
			edge[from].push_back(to);
			edge[to].push_back(from);
		}


		for(int i=1;i<=V;i++){
			if(color[i]==0){
				dfs(i,1);
			}
		}

		bool ok=true;

		for(int i=1;i<=V;i++){
			for(int k=0;k<edge[i].size();k++){
				int j=edge[i][k];
				if(color[i]==color[j]){
					ok=false;
				}
			}
		}
		if(ok)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<"\n";
	}


}
