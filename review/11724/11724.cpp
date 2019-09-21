#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> edge[1001];
bool check[1001];

void dfs(int node){
	check[node]=true;
	int i=0;

	for(i=0;i<edge[node].size();i++){
		int next=edge[node][i];
		if(!check[next]){
			dfs(next);
		}
	}
}


void bfs(int node){
	queue<int> q;
	q.push(node);
	check[node]=true;
	while(!q.empty()){
		int x=q.front();
		q.pop();
		for(int i=0;i<edge[x].size();i++){
			int next=edge[x][i];
			if(!check[next]){
				q.push(next);
				check[next]=true;
			}
		}
	}

}


int main(){
	int N,M;
	cin>>N>>M;
	for(int i=0;i<M;i++){
		int from, to;
		cin>>from>>to;
		edge[from].push_back(to);
		edge[to].push_back(from);
	}
	for(int i=1;i<=N;i++){
		sort(edge[i].begin(),edge[i].end());
	}

	int component=0;

	for(int i=1;i<=N;i++){
		if(!check[i]){
			dfs(i);
			component++;
		}
	}
	cout<<component<<"\n";
}
