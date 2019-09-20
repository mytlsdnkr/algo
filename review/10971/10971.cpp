#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int cities[11];
int w[11][11];
int mini=1e9;
long long temp=0;

int main(){
	int N;
	cin>>N;
	
	int i,j;

	for(i=1;i<=N;i++)
		cities[i]=i;

	for(i=1;i<=N;i++){
		for(j=1;j<=N;j++){
			cin>>w[i][j];
		}
	}
	int k=0;
	int flag;
	do{
		for(i=1;i<N;i++){
			if(w[cities[i]][cities[i+1]]==0){
				flag=true;
				break;
			}
			temp+=w[cities[i]][cities[i+1]];
		}
		if(flag){
			flag=false;
			temp=0;
			continue;
		}
		if(w[cities[N]][cities[1]]==0){
			temp=0;
			continue;
		}
		
		temp+=w[cities[N]][cities[1]];

		if(temp<mini)
			mini=temp;
		temp=0;
	}while(next_permutation(cities+1,cities+N));

	cout<<mini<<"\n";


}
