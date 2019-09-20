#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool check(string &password) {
	int ja = 0;
	int mo = 0;
	for (char x : password) {
		if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u') {
			mo += 1;
		} else {
			ja += 1;
		}
	}
	return ja >= 2 && mo >= 1;
}

void recursive(string password, int i, int L, vector<char> &input){
	if(password.size()==L){
		if(check(password))
			cout<<password<<"\n";

		return ;
	}

	if(i>=input.size())
		return ;

	recursive(password+input[i],i+1,L,input);
	recursive(password,i+1,L,input);
}





int main(){
	int L,C;
	cin>>L>>C;
	vector<char> arr(C);
	int i=0;

	for(i=0;i<C;i++){
		cin>>arr[i];
	}
	sort(arr.begin(),arr.end());
	recursive("",0,L,arr);
	return 0;
}
