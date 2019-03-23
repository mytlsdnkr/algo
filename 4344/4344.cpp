#include <iostream>
using namespace std;

int main(){
	int testCase;
	cin>>testCase;
	
	int i,j=0;
	int numberOfstudents;
	int sum=0;
	int count=0;
	double avg;
	double percent;
	for(i=0;i<testCase;i++){
		cin>>numberOfstudents;
		int *students=new int[numberOfstudents];
		for(j=0;j<numberOfstudents;j++){
			cin>>students[j];
			sum+=students[j];
		}
		avg=(double)sum/(double)numberOfstudents;
		
		for(j=0;j<numberOfstudents;j++){
			if(students[j]>(int)avg)
				count++;
		}
		
		percent=(double)count/(double)numberOfstudents;
		
		cout.setf(ios::fixed);
		cout.precision(3);
		cout<<(double)percent*(double)100<<"%"<<endl;
		percent=0.0;
		sum=0;
		count=0;
		avg=0.0;
		
		delete [] students;
				
	}
	return 0;
		
}