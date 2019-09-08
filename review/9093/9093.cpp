#include <iostream>
#include <stack>
#include <cstdio>
#include <string>

using namespace std;

int main(){
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int testCase;
	cin>>testCase;
	int i=0;
	for(i=0;i<testCase;i++){
		string input;
		cin.ignore(256,'\n');
		getline(cin,input);

		stack<char> st;
		int len=input.length();
		if(input[0]!=' '){
			st.push(' ');
		}

		for(int j=0;j<len;j++){
			if(input[j]==' ' || input[j]=='\0'){
				while(!st.empty()){
					cout<<st.top();
					st.pop();
				}
			}
			st.push(input[j]);
		}
	


		return 0;
	}

}






