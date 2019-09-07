#include <iostream>
#include <cstdio>
#include <string>
#include <stack>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

	string input;
	cin>>input;

	int N;
	cin>>N;
	int i=0;
	stack<char> st,st1;

	for(char ch : input)
		st.push(ch);
	while(N--){
		char command;
		scanf(" %c",&command);

		if(command=='P'){
			char plus;
			scanf(" %c",&plus);
			st.push(plus);
		}else if(command=='L'){
			if(!st.empty()){
				char temp=st.top();
				st1.push(temp);
				st.pop();
			}
		}else if(command=='B'){
			if(!st.empty()){
				st.pop();
			}
		}else if(command=='D'){
			if(!st1.empty()){
				char temp;
				temp=st1.top();
				st.push(temp);
				st1.pop();
			}
		}

	}
	while(!st.empty()){
		st1.push(st.top());
		st.pop();
	}

	while(!st1.empty()){
		cout<<st1.top();
		st1.pop();
	}

	printf("\n");


	return 0;
}


