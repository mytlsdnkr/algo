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
	cin.ignore();
	int i=0;
	for(i=0;i<testCase;i++){
		string input;
		getline(cin,input);
		input+='\n';

		stack<char> st;
			for(char ch : input){
				if(ch==' ' || ch=='\n'){
					while(!st.empty()){
						cout<<st.top();
						st.pop();
					}
					cout<<ch;
				}else{
					st.push(ch);
				}

			}





	}

	return 0;
}
