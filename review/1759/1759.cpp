#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

vector<string> enc;
vector<char> input;
char row[16];
void recursive(int count,int start, int L, int C){
	if(count==L){
		enc.push_back((string)row);
		count=0;
		return ;
	}
	int i;

	for(i=start;i<C;i++){
		row[count]=input[i];
		recursive(count+1,i+1,L,C);
	}
}



int main(){
	int L,C;
	cin>>L>>C;
	int i=0;
	int acount=0;
	int jcount=0;


	for(i=0;i<C;i++){
		char temp;
		cin>>temp;
		input.push_back(temp);
	}
	sort(input.begin(),input.end());
	recursive(0,0,L,C);

	sort(enc.begin(),enc.end());

	for(auto &v : enc){
		acount=0;
		jcount=0;
		for(int i=0;i<L;i++){
			if(v[i]=='a' || v[i]=='e' || v[i]=='i' || v[i]=='o' || v[i]=='u'){
				acount++;
			}else{
				jcount++;
			}
		}
		if(acount==0 || jcount<2)
			continue;
		else{
			for(int i=0;i<L;i++){
				cout<<v[i];
			}
		}
		cout<<"\n";
	}
}

