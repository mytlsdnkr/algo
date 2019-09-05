#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int i=0,j=0;
	vector<int> people;
	vector<int> answer;
	int sum=0;

	for(i=0;i<9;i++){
		int num;
		cin>>num;
		sum+=num;
		people.push_back(num);
	}
	sort(people.begin(),people.end());

	for(i=0;i<9;i++){
		for(j=i+1;j<9;j++){
			if(sum-people[i]-people[j]==100){
				for(int k=0;k<9;k++){
					if(k==i||k==j)
						continue;
					cout<<people[k]<<endl;
				}
				return 0;
			}
		}
	}
}
	
