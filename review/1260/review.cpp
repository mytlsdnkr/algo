#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
#include <algorithm>
using namespace std;
vector<int> edge[1001];
bool check[1001];

void dfs(int node){
	check[node]=true;
	cout<<node<<" ";

	for(int i=0;i<edge[node].size();i++){
		int next=edge[node][i];
		if(!check[next])
			dfs(next);
	}



}


void bfs(int node){
	queue<int> q;
	memset(check,false,sizeof(check));
	q.push(node);
	check[node]=true;
	while(!q.empty()){
		int x=q.front();
		q.pop();
		cout<<x<<" ";
		int i=0;
		for(i=0;i<edge[x].size();i++){
			int next=edge[x][i];
			if(!check[next]){
				q.push(next);
				check[next]=true;
			}

		}
	}
	
}


int main(){
	int N,M,V;
	cin>>N>>M>>V;

	int i=0;
	for(i=0;i<M;i++){
		int temp,temp1;
		cin>>temp>>temp1;
		edge[temp].push_back(temp1);
		edge[temp1].push_back(temp);
	}
	for(i=1;i<=N;i++){
		sort(edge[i].begin(),edge[i].end());
	}

	dfs(V);
	cout<<"\n";
	bfs(V);
	cout<<"\n";
}

