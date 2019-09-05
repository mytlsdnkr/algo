#include <iostream>
#include <stack>
using namespace std;


string valid(string s){
	int count=0;
	for(char ch : s){
		if(ch=='('){
			count++;
		}else{
			count--;
		}
		if(count<0){
			return "NO";
		}


	}
	if(count==0)
		return "YES";
	else
		return "NO";


}

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int testcase;
	cin>>testcase;
	cin.ignore();

	while(testcase--){
		string input;
		cin>>input;
		cout<<valid(input)<<endl;


	}
	return 0;


}
