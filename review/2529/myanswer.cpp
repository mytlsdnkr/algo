#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool check[10];
int arr[10];
vector<vector<int>> save;


void recursive(int index, int k, vector<char> &input, vector<int> &current){
	if(index==k+1){
		bool flag;
		int i=0,j=0;
		for(i=0;i<k;i++){
			if(input[i]=='<'){
				if(!(current[i]<current[i+1]))
					return ;
			}else if(input[i]=='>'){
				if(!(current[i]>current[i+1]))
					return ;
			}
		}
		save.push_back(current);
		return ;
	}

	int i=0;
	for(i=0;i<10;i++){
		if(check[i])
			continue;
		check[i]=true;
		current.push_back(i);
		recursive(index+1,k,input,current);
		current.pop_back();
		check[i]=false;
	}
}


int main(){
	int k;
	cin>>k;
	vector<char> input(k);

	int i=0;
	for(i=0;i<k;i++)
		cin>>input[i];

	for(i=0;i<10;i++)
		arr[i]=i;
	vector<int> current;

	recursive(0,k,input,current);
	
	for(i=0;i<k+1;i++)
		cout<<save[save.size()-1][i];
	cout<<"\n";

	for(i=0;i<k+1;i++)
		cout<<save[0][i];
	cout<<"\n";




}
