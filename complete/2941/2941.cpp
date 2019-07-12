#include <iostream>
#include <cstring>
using namespace std;
#define SIZE 100

int main(){
	char str[SIZE];
	int i=0;
	int len=0;
	int count=0;
	cin>>str;
	len=strlen(str);
	
	for(i=0;i<len;i++){
		if(str[i]=='c'){
			if(str[i+1]=='=' || str[i+1]=='-'){	
				count++;
				i++;
				continue;
			}
		}
		
		if(str[i]=='d'){
			if(str[i+1]=='z'){
				if(str[i+2]=='='){
					count++;
					i+=2;
					continue;
				}
			}else if(str[i+1]=='-'){
				i++;
				count++;
	
				continue;
			}
		}
		
		if(str[i]=='l'){
			if(str[i+1]=='j'){
				count++;
				i++;
			    continue;
			}
		}
		
		if(str[i]=='n'){
			if(str[i+1]=='j'){
				count++;
				i++;
		
				continue;
			}
		}
		
		if(str[i]=='s'){
			if(str[i+1]=='='){
				count++;
				i++;

				continue;
			}
		}
		if(str[i]=='z'){
			if(str[i+1]=='='){
				count++;
				i++;
		
				continue;
			}
		}
		count++;
	
	}
	cout<<count;
	return 0;
}
		
				
		
	
	
	
	
	
