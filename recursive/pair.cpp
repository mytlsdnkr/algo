#include <iostream>
using namespace std;

int n;
bool areFriends[10][10]={false,};
int countPairings(bool taken[10]){
	int i=0;
	int FirstnoPair=-1;
	for(i;i<n;i++){
		if(!taken[i]){
			FirstnoPair=i;
			break;
		}
	}

	if(FirstnoPair==-1)
		return 1;
	int result=0;
	for(i=FirstnoPair+1;i<n;i++){
		if(!taken[i] && areFriends[FirstnoPair][i]){
			taken[FirstnoPair]=taken[i]=true;
			result+=countPairings(taken);
			taken[FirstnoPair]=taken[i]=false;
		}
	}

	return result;

}

int main(){
	int pair;
	int i=0;

	cin>>n>>pair;
	int temp,temp1;
	for(i=0;i<pair;i++){
		cin>>temp>>temp1;
		areFriends[temp][temp1]=true;
		temp=0,temp1=0;
	}

	bool taken[10]={false,};

	cout<<countPairings(taken)<<endl;

	return 0;

		
	




}
