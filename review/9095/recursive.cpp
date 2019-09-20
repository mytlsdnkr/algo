#include <iostream>
using namespace std;
int count=0;
void recursive(int sum,int start,int target){
	if(sum>target){
		sum=0;
		return ;
	}
	if(sum==target){
		count++;
		sum=0;
		return ;
	}


	while(1){
		if(sum<target){
			sum+=start;
			recursive(sum,start,target);
		}
		start++;
		if(start==4)
			start=1;
	}

		


}
int main(){

	int testCase;
	cin>>testCase;
	int i=0;
	for(i=0;i<testCase;i++){
		int temp;
		cin>>temp;
		int sum=0;
		recursive(sum,1,temp);
		cout<<count<<"\n";
		count=0;
	}

}
