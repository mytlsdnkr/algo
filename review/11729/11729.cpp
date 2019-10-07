#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;

int count=0;


void recursive(int N, int start, int by, int to){
	if(N==1){
		printf("%d %d\n", start, to);
		return ;
	}

	recursive(N-1,start,to,by);
	recursive(1,start,by,to);
	recursive(N-1,by,start,to);

}

int main(){
	int N;
	cin>>N;

	cout<<(int)pow(2,N)-1<<endl;
	recursive(N,1,2,3);



}
