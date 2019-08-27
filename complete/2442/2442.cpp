#include <iostream>
using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin>>N;
	for(int i=1;i<=N;i++){
		for(int temp=N-i;temp>0;temp--){
			cout<<" ";
		}
		for(int j=1;j<=(2*i)-1;j++){
			cout<<"*";
	}
		cout<<endl;
	}

	return 0;



}
