#include <iostream>
using namespace std;


int main(){
	int N;
	cin>>N;
	int i=0;
	int j=0;
	int num;
	int count=0;
	bool flag;
	
	
	if(N>100)
		return 0;
	
	for(i=0;i<N;i++){
		cin>>num;
		if(num>1000)
			return 0;
		
		if(num==1)
			continue;
		if(num==2){
			count++;
			continue;
		}
			
		
		for(j=2;j<num;j++){
			if(num%j==0){
				flag=true;
				break;
			}
		}
		if(!flag)
			count++;
		
		flag=false;
	}
	
	cout<<count;
		
	
	return 0;
		
}