#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> ans;
bool used[10];
char input[10];

bool check(char a, char b, char op){
	if(op=='<'){
		if(a<b)
			return true;
	}

	if(op=='>'){
		if(a>b)
			return true;
	}

	return false;
}

void recursive(int index, string sum,int k){
	if(index==k+1){
		ans.push_back(sum);
		return ;
	}

	int i=0;

	for(i=0;i<10;i++){
		if(used[i])
			continue;
		if(index==0 || check(sum[index-1],i+'0',input[index-1])){
			used[i]=true;
			recursive(index+1,sum+to_string(i),k);
			used[i]=false;
		}
	}	
}

int main(){
	int k;
	cin>>k;
	int i=0;

	for(i=0;i<k;i++){
		cin>>input[i];
	}

	recursive(0,"",k);

	auto p = minmax_element(ans.begin(), ans.end());
	cout << *p.second << '\n';
	cout << *p.first << '\n';
}
