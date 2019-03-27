#include <iostream>
using namespace std;

void countArr(int num[],int result){
	
	while(1){
		num[result%10]++;
		result/=10;
		
		if(result/10==0){
			num[result%10]++;
			break;
		}
	}
	
}
	

int main(){
	int num[10]={0,};
	int i;
	
	
	int result;
	int A,B,C;
	cin>>A>>B>>C;
	
	result=A*B*C;
	
	countArr(num,result);
	
	
	for(i=0;i<10;i++)
		cout<<num[i]<<endl;
}