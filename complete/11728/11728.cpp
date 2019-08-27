#include <iostream>
#include <string>
using namespace std;

int main(){

	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin.tie(NULL);

	string input;
	while(1){
		getline(cin,input);
		if(input=="") break;
		cout<<input<<endl;
	}

	return 0;


}
