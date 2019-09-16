#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(){
	string input;
	stack<char> st;
	int count=0;

	cin>>input;
	int len=input.length();
	for(int i=0;i<len;i++){
		if(input[i]=='(' && input[i+1]==')'){
			if(st.size()!=0){
				count+=st.size();
			}
			i++;
			continue;
				
		}

		if(input[i]=='('){
			st.push(input[i]);
			count+=1;
		}
		else
			st.pop();
	

	}

	cout<<count<<endl;

}
