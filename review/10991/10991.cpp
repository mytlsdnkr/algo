#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	if(n==1){
		cout<<"*"<<endl;
		return 0;
	}

	for(int i=0;i<n;i++){
		for(int j=i;j<n-1;j++){
			cout<<" ";
		}
		for(int j=i+1;j<n-i;j++){
			cout<<"* ";
		}
		cout<<endl;
	}

	return 0;





}
