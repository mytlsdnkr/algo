#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cstdio>
#include <cstring>
using namespace std;
bool check[1001];
vector<int> edge[1001];

void dfs(int node){
	check[node]=true;
	cout<<node;

	int i=0;
	for(i=0;i<edge[node].size();i++){
		int next=edge[node][i];
		if(!check[next])
			dfs(next);
	}
}


void bfs(int start){
	queue<int> q;
	memset(check,false,sizeof(check));
	check[start]=true;
	q.push(start);
	while(!q.empty()){
		int node=q.front();
		q.pop();
		cout<<node;
		int i;
		for(i=0;i<edge[node].size();i++){
			int next=edge[node][i];
			if(!check[next]){
				check[next]=true;
				q.push(next);
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

