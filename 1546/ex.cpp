#include <iostream>
using namespace std;

int main(){
	int numberOfsubject;
	cin >>numberOfsubject;
	
	int *scoreArray = new int[numberOfsubject];
	int i,j=0;
	
	for(i=0;i<numberOfsubject;i++){
		cin>>scoreArray[i];
	}
	
	for(i=0;i<numberOfsubject-1;i++){
		for(j=1;j<numberOfsubject;j++){
			if(scoreArray[i]<scoreArray[j]){
				int temp=scoreArray[j];
				scoreArray[j]=scoreArray[i];
				scoreArray[i]=temp;
			}
		}
	}
	
	int maxScore=scoreArray[numberOfsubject-1];
	int sum=0;
	for(i=0;i<numberOfsubject;i++){
		scoreArray[i]=scoreArray[i]/(maxScore*100);
		sum+=scoreArray[i];
	}
	
	float average=(float)sum/(float)numberOfsubject;
	
	cout<<average;
	
	return 0;
}
	
				