#include <iostream>
#include <string>
using namespace std;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin.tie(nullptr);

	int t;
	cin>>t;
	string num,num1;
	for(int i=0;i<t;i++){
		getline(cin,num,',');
		getline(cin,num1);
		cout<<stoi(num)+stoi(num1)<<endl;
	}

	return 0;







}


