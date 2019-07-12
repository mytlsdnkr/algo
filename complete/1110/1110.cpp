#include <iostream>
using namespace std;

int FindOnedigit(int num){
	return num%10;
}

int FindTendigit(int num){
	return num/10+num%10;
}

int main(){
	int num,nextNum;
	int count=0;
	cin>>num;


	while(1){
		if(count==0){
			if(num<10){	
			nextNum=(FindOnedigit(num)*10)+FindOnedigit(num);
			}else{
				nextNum=(FindOnedigit(num)*10)+(FindTendigit(num)%10);
			}		
		}else{	
		nextNum=(FindOnedigit(nextNum)*10)+(FindTendigit(nextNum)%10);
		}
		
		count++;
		if(nextNum==num)
			break;
		
		
	
	}
	
	cout<<count;
	return 0;
}
	