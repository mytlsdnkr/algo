#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

struct Time{
	int begin;
	int end;
};
bool cmp(Time a, Time b){

	if(a.end==b.end){
		return a.begin<b.begin;
	}else{
		return a.end<b.end;
	}


}


int main(){
	int num;
	cin>>num;
	vector<Time> time(num);

	int start,end;

	for(int i=0;i<num;i++){
		cin>>start>>end;
		time[i].begin=start;
		time[i].end=end;
	}


	sort(time.begin(),time.end(),cmp);

	int count=0;
	int lastTime=0;

	for(int i=0;i<num;i++){
		if(lastTime<=time[i].begin){
			lastTime=time[i].end;
			count++;
		}
	}

	cout<<count<<endl;

	
	
	




	return 0;
}
