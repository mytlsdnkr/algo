#include <iostream>
using namespace std;

int checkLen(int num){
	int len=0;

	while(num>0){
		len++;
		num/=10;
	}

	return len;
}

int main(){
	int N;
	cin>>N;
	if(N<10){
		cout<<N<<endl;
		return 0;
	}

	int i=0;
	long long count=9;
	for(i=10;i<=N;i++){
		int len=checkLen(i);
		count+=len;
	}

	cout<<count<<endl;

}

