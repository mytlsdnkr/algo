#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int num;
	cin>>num;

	vector<int>arr1;
	vector<int>arr2;
	vector<char>ans;

	int i;
	int temp,temp2;
	for(i=0;i<num;i++){
		cin>>temp;
		arr1.push_back(temp);
	}
	for(i=0;i<num;i++){
		cin>>temp;
		arr2.push_back(temp);
	}
	for(i=0;i<num;i++){
		temp=arr1[i]|arr2[i];

		while(temp!=0){
			temp2=temp%2;
			temp/=2;

			if(temp2==1){
				ans.push_back('#');
			}else{
				ans.push_back(' ');
			}
		}
		if(ans.size()<num)
			ans.push_back(' ');

		reverse(ans.begin(),ans.end());

		for(int j=0;j<num;j++)
			cout<<ans[j];
		cout<<endl;
		ans.resize(0);
	}


	return 0;
}













