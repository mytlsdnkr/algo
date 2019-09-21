#include <iostream>
#include <vector>
using namespace std;

vector<pair<int,int>> friends;
bool a[2000][2000];
vector<int> g[2000];
int main(){
	int N,M;
	cin>>N>>M;
	vector<int> person;
	int i=0;
	for(i=0;i<N;i++){
		person.push_back(i);
	}


	for(i=0;i<M;i++){
		int temp,temp1;
		cin>>temp>>temp1;
		friends.push_back(make_pair(temp,temp1));
		friends.push_back(make_pair(temp1,temp));
		a[temp][temp1]=true;
		a[temp1][temp]=true;
		g[temp].push_back(temp1);
		g[temp1].push_back(temp);
			
	}

	for(int i=0;i<M;i++){
		for(int j=0; j<M;j++){
			int A=friends[i].first;
			int B=friends[i].second;

			int C=friends[j].first;
			int D=friends[j].second;

			if(A==B || A==C || A==D|| B==C|| B==D|| C==D){
				continue;
			}

			if(!








}
