#include <iostream>
using namespace std;
int recursive(int sum,int target){
	if(sum>target){
		return 0;
	}
	if(sum==target){
		return 1;
	}
	int i;
	int count=0;

	for(i=1;i<=3;i++){
		count+=recursive(sum+i,target);
	}

	return count;
}
int main(){

	int testCase;
	cin>>testCase;
	int i=0;
	for(i=0;i<testCase;i++){
		int temp;
		cin>>temp;
		int sum=0;
		cout<<recursive(sum,temp)<<"\n";
	}

}
