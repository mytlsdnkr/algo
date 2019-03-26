#include <iostream>
#include <cstring>
using namespace std;


int main(){
	string word;
	bool flag=false;
	int count=0;
	int i;
	
	getline(cin,word);
	int len=word.length();
	for(i=0;i<len;i++){
		if(word[i]==' ' && word[i+1]=='\0'){
			flag=true;
			continue;
		}
		if(i==0 && word[i]==' ' ){
			flag=true;
			continue;
		}
		if(word[i]!=' '){
			flag=true;
			continue;
		}else{
			flag=false;
			count++;
		}
		

	}
	
	cout<<count+1;
	
	return 0;
	
}
		
	