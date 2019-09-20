#include <iostream>
#include <vector>
using namespace std;


int S[20][20];
int ans=99999;
void recursive(int index, vector<int> &first, vector<int> &second,int N){
	if(index==N){
		if(first.size()!=N/2)
			return ;
		if(second.size()!=N/2)
			return ;
		int i,j;
		int t1=0;
		int t2=0;
		for(i=0;i<N/2;i++){
			for(j=0;j<N/2;j++){
				if(i==j)
					continue;
				t1+=S[first[i]][first[j]];
				t2+=S[second[i]][second[j]];
			}
		}

		int diff=t1-t2;
		if(diff<0)
			diff=-diff;

		if(diff<ans)
			ans=diff;
		return ;
	}

	first.push_back(index);
	recursive(index+1,first,second,N);
	first.pop_back();
	second.push_back(index);
	recursive(index+1,first,second,N);
	second.pop_back();

}
int main(){
	int N;
	cin>>N;

	int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			cin>>S[i][j];
		}
	}

	vector<int> first;
	vector<int> second;

	recursive(0,first,second,N);

	cout<<ans<<"\n";






}
