#include <iostream>
#include <string>
#include <stack>
using namespace std;

//tag�� ������ �ΰ��� ��������Ѵ�. ó�� tag�� ���۰� ���� tag�� ������ ��������
//���� tag�� ���� ���ڰ� ������ ���ÿ� �ִ°� ����ϰ� �� �ܿ��� �״�� ���ڿ��� ���
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