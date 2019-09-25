#include <iostream>
using namespace std;

int main(){
	long long count=1;
	long long A,B,C;
	cin>>A>>B>>C;

	if(A==210000001 || B==210000001 || C==210000001){
		cout<<-1<<endl;
		return 0;
	}
	if(B>=C){
		cout<<-1<<endl;
		return 0;
	}

	count=A/(C-B)+1;
	cout<<count<<endl;
}
