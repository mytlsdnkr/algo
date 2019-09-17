#include <iostream>
using namespace std;


int main(){

	int testCase;
	cin>>testCase;
	int i=0;
	int j=0;
	int M,N,x,y;
	bool flag;

	for(i=0;i<testCase;i++){
		cin>>M>>N>>x>>y;
		x-=1;
		y-=1;

		for(j=x;j<=(M*N);j+=M){
			if(j%N==y){
				flag=false;
				break;
			}else
				flag=true;

		}
		if(flag)
			cout<<-1<<endl;
		else
			cout<<j+1<<endl;


		

	}
}

