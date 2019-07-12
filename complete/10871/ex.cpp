#include <iostream>
using namespace std;

int main(){
	int num;
	int lenArray;
	cin>>lenArray>>num;

	int *numberArray=new int[lenArray];

	int i;

	for(i=0;i<lenArray;i++){
		cin>>numberArray[i];
		if(numberArray[i]<num){
			cout<<numberArray[i]<<' ';
		}

	}

	

	
	delete[] numberArray;

	return 0;
}
