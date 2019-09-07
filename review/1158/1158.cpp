#include <iostream>
#include <cstdio>
#include <queue>
#include <vector>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N,K;
	cin>>N>>K;
	queue<int> q;
	vector<int> arr;
	int i=0;
	for(i=1;i<=N;i++){
		q.push(i);
	}

	cout<<"<";
	for(i=0;i<N-1;i++){
		for(int j=0;j<K-1;j++){
			q.push(q.front());
			q.pop();
		}
		cout<<q.front()<<", ";
		q.pop();
	}
	cout<<q.front()<<">"<<endl;
		

	return 0;
}
