#include <iostream>
#include <cstring>
using namespace std;
#define SIZE 80

int main(){
	int testCase;
	cin>>testCase;
	int i,j,len;
	int count=0;
	int sum=0;
	bool flag=false;
	char result[SIZE];
	
	for(i=0;i<testCase;i++){
		cin>>result;
		len=strlen(result);
		for(j=0;j<len;j++){
			if(result[j]=='O'){
				if(flag==false){
					flag=true;
					count++;
				}else{
					count++;
				}
			}else{
				flag=false;
				count=0;
			}
			sum+=count;
		}
		cout<<sum<<endl;
		sum=0;
		count=0;
	}
	
	return 0;
}
					
			
		
		
		
		
	
	