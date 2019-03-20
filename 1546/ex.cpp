#include <iostream>
using namespace std;

//if return -1 score is bigger than 100

#define SCORE_ERR -1

int main(){
	int numberOfsubject;
	cin >>numberOfsubject;
	
	int *scoreArray = new int[numberOfsubject];
	int i,j=0;
	
	for(i=0;i<numberOfsubject;i++){
		cin>>scoreArray[i];
		if(scoreArray[i]>100)
			return SCORE_ERR;
	}
	
	for(i=0;i<numberOfsubject-1;i++){
		for(j=1;j<numberOfsubject;j++){
			if(scoreArray[i]>scoreArray[j]){
				int temp=scoreArray[j];
				scoreArray[j]=scoreArray[i];
				scoreArray[i]=temp;
			}
		}
	}
	
	
	int maxScore=scoreArray[numberOfsubject-1];
	

	double sum=0.0;
	for(i=0;i<numberOfsubject;i++){
		sum+=((double)scoreArray[i]/(double)maxScore*100.0);
		
	}
	double average=0.0;
	
	
	average=(double)sum/(double)numberOfsubject;
	cout.precision(5);
	cout << average << endl;

	
	return 0;
}
	
				