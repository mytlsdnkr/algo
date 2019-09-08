#include <iostream>
#include <string>
#include <stack>
using namespace std;

//tag의 시작을 두개로 나누어야한다. 처음 tag의 시작과 나중 tag의 시작을 구분으로
//나중 tag의 시작 문자가 나오면 스택에 있는걸 출력하고 그 외에는 그대로 문자열을 출력
int main(){
	string input;
	getline(cin,input);

	int i=0;
	bool istag;
	input+='\n';
	int len=input.length();
	stack<char> st;

	for(i=0;i<len;i++){
		if(!istag){
			if(input[i]=='<'){
				if(st.size()!=0){
					while(!st.empty()){
						cout<<st.top();
						st.pop();
					}
				}
				istag=true;
				cout<<input[i];
				continue;
			}
			if(input[i]==' ' || input[i]=='\n'){
				while(!st.empty()){
					cout<<st.top();
					st.pop();
				}
				cout<<input[i];
				continue;
			}
			st.push(input[i]);
		}else{
			cout<<input[i];
			if(input[i]=='>')
				istag=false;
		}
	}




}
