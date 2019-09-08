#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
	string input;
	getline(cin,input);

	int i=0;
	bool istag;
	int len=input.length();
	stack<char> st;


	for(i=0;i<len;i++){
		if(istag){
			if(input[i]=='>'){
				istag=false;
			}
			continue;
		}
		if(input[i]=='<'){
			istag=true;
			continue;
		}
		if(input[i]==' ')
			continue;
		st.push(input[i]);
	}
	while(!st.empty()){
		cout<<st.top();
		st.pop();
	}
	cout<<endl;

	for(i=0;i<len;i++){
		if(istag){
			if(input[i]=='>'){
				istag=false;
			}
		}
		if(input[i]=='<'){
			istag=true;
		}
		if(!istag){
			cout<<input[i];
			continue;
		}else{
			input[i]=st.top();
			st.pop();
			cout<<input[i];
		}
	}

	cout<<endl;
}
