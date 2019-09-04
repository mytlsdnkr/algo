#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool cmp(pair<int,int> &a,pair<int,int> &b){
	return a>b;

}

int main(){
	int N;
	vector<int> array;
	cin>>N;

	int i=0;
	for(i=0;i<N;i++){
		int num;
		cin>>num;
		array.push_back(num);
	}

	sort(array.begin(),array.end());

	//average
	double average;
	int sum=0;
	int flag;
	for(i=0;i<N;i++){
		sum+=array[i];
	}
	average=(double)sum/(double)N;
	average=floor(average+0.5);

	//midlle value

	int midvalue;
	midvalue=array[N/2];

	//most count
    int count=0;
	int mostcount;

	vector<pair<int,int>> CountArray;
	for(i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(i==j)
				continue;
			if(array[i]==array[j]){
				count++;
			}
		}
		CountArray.push_back(make_pair(count,i));
		count=0;
	}



	sort(CountArray.begin(),CountArray.end(),cmp);
	vector<int> mostArraySave;


	int max=CountArray[0].first;
	mostArraySave.push_back(array[CountArray[0].second]);

	for(i=1;i<N;i++){
		if(max==CountArray[i].first){
			mostArraySave.push_back(array[CountArray[i].second]);
			flag=true;
		}
	}

	if(flag){
		max=mostArraySave[1];
	}else{
		max=mostArraySave[N-2];
	}
	mostcount=max;
	if(N==1){
		mostcount=array[0];
	}

	//range

	int range=array[N-1]-array[0];

	cout<<average<<endl;
	cout<<midvalue<<endl;
	cout<<mostcount<<endl;
	cout<<range<<endl;
	return 0;

}
