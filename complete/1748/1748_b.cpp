#include <iostream>
using namespace std;


int main(){
	int N;
	cin>>N;

	int start=1;
	int end;
	int len=0;
	long long count=0;

	for(start=1,len=1;start<=N;start*=10,len++){
		end=start*10-1;
		if(end>N)
			end=N;

		count+=(long long)(end-start+1)*(long long)len;


	}

	cout<<count<<endl;



}

