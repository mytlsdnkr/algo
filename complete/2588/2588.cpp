#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int first[3];
	int second[3];

	int num,num1;
	cin>>num>>num1;
	int k=2;
	while(num>0 && num1>0){
		int temp;
		temp=num%10;
		first[k]=temp;
		num/=10;
		temp=num1%10;
		second[k--]=temp;
		num1/=10;
	}

	int i=0;

	int sum=0;

	//first sum
	k=2;
	int result=0;
	int mul=100;
	for(int i=0;i<3;i++){
		sum+=mul*(first[i]*second[2]);
		mul/=10;
	}
	cout<<sum<<endl;
	int sum1=0;
	mul=100;
	for(int i=0;i<3;i++){
		sum1+=mul*(first[i]*second[1]);
		mul/=10;
	}
	cout<<sum1<<endl;

	int sum2=0;
	mul=100;
	for(int i=0;i<3;i++){
		sum2+=mul*(first[i]*second[0]);
		mul/=10;
	}
	cout<<sum2<<endl;

	result=sum+sum1*10+sum2*100;

	cout<<result<<endl;
}
