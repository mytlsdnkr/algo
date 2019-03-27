#include <iostream>
using namespace std;


int main(){
	string word;

	int count=0;
	int i;
	
	getline(cin,word);
	int len=word.length();
	for(i=0;i<len;i++){
		if(word[i]==' ')
			count++;
	}
	
	if(word[0]==' ')
		count--;
	
	
	if(word[len-1]==' ')
		count--;
	
	cout<<count+1;
	
	return 0;
	
}
		
	