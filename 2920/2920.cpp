#include <iostream>
using namespace std;

int main(){
	int num[8];
	int i,j;
	for(i=0;i<8;i++){
		cin>>num[i];
	}
	//처음의 값으로 mixed 계산
	if(num[0]!=1 && num[0]!=8){
		cout<<"mixed"<<endl;
		return 0;
	}
	//ascending 계산
	if(num[0]==1){
		for(i=1;i<8;i++){
			if(num[i]!=i+1){
				cout<<"mixed"<<endl;
				return 0;
			}
		}
		
		cout<<"ascending"<<endl;
		return 0;
			
	}
	//descending 계산
	if(num[0]==8){
		for(j=1,i=7;j<8;i--,j++){
			if(num[j]!=i){
				cout<<"mixed"<<endl;
				return 0;
			}
		}
		cout<<"descending"<<endl;
		return 0;
	}
	
	
	return 0;
}