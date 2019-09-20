#include <iostream>
using namespace std;

int m=0;
int T[16];
int P[16];

void recursive(int day,int sum,int N){
	if(day==N+1){
		if(sum>m)
			m=sum;
		return ;
	}
	if(day>N+1){
		return ;
	}

	recursive(day+T[day],sum+P[day],N);
	recursive(day+1,sum,N);

}


int main(){
	int N;
	cin>>N;
	int i=1;
	for(i;i<=N;i++)
		cin>>T[i]>>P[i];

	recursive(1,0,N);
	cout<<m<<"\n";
}
