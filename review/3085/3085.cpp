#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int check(vector<string> &input,int imax, int jmax){
	int len=input.size();
	int i=0,j=0;
	int answer=1;



	for(i=0;i<len;i++){
		int count=1;
		for(j=0;j<len;j++){
			if(j+1<len){
				if(input[i][j]==input[i][j+1]){
					count+=1;
				}else{
					count=1;
				}
				if(answer<count)
					answer=count;
			}
		}
		count=1;
		for(j=0;j<len;j++){

			if(j+1<len){
				if(input[j][i]==input[j+1][i]){
					count+=1;
				}else{
					count=1;
				}
				if(answer<count)
					answer=count;
			}
		}
	}
	return answer;
}

int main(){
	int N;
	cin>>N;
	int i=0;
	vector<string> input(N);
	for(i=0;i<N;i++){
		cin>>input[i];
	}

	int j=0;
	int answer=0;
	int temp;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(j+1<N){
				swap(input[i][j],input[i][j+1]);
				temp=check(input,i,j);
				if(answer<temp){
					answer=temp;
				}
				swap(input[i][j],input[i][j+1]);
			}

			if(i+1<N){
				swap(input[i][j],input[i+1][j]);
				temp=check(input,i,j);
				if(answer<temp){
					answer=temp;
				}
				swap(input[i][j],input[i+1][j]);
			}
		}
	}

	cout<<answer<<endl;

}
