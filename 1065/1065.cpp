#include <iostream>
using namespace std;

#define ERR_LIMIT -1
// if return value is -1 then, num is over 1000

bool findHansoo(int num){
	int num1,num2,num3;
	int save,save1;
	
	if(num<100){
		return true;
	}else if(num==1000){
		return false;
	}else{
		num1=num%10;
		num/=10;
		num2=num%10;
		num/=10;
		save=num2-num1;
		num3=num%10;
		save1=num3-num2;
		
		if(save==save1)
			return true;
		else
			return false;
	}
	
	return false;
	
}
		
		
	
int main(){
	int num;
	cin>>num;
	
	if(num>1000)
		return ERR_LIMIT;
	
	int i;
	int count=0;
	for(i=1;i<=num;i++){
		if(findHansoo(i))
			count++;
	}
	
	cout<<count;
	
	return 0;
}
		
	
	