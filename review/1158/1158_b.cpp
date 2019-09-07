#include <cstdio>
#include <queue>
using namespace std;

int main(){

	int N,K;
	queue<int> q;
	scanf("%d %d",&N,&K);

	int i=1;
	for(i;i<=N;i++){
		q.push(i);
	}

	printf("<");

	for(i=0;i<N-1;i++){
		for(int j=0;j<K-1;j++){
			q.push(q.front());
			q.pop();
		}
		printf("%d, ",q.front());
		q.pop();
	}

	printf("%d>\n",q.front());
	return 0;

}


