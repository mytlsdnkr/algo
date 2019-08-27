#include <iostream>
#include <vector>

using namespace std;

void printPicked(vector<int> &picked){
	int i;
	for(i=0; i<picked.size();i++){
		cout<<picked[i];
	}
	cout<<endl;
}



void pick(vector<int> &picked, int n, int toPick){
	printPicked(picked);
	if (toPick==0){
		printPicked(picked);
		return;
	}

	int smallest=picked.empty() ? 0 : picked.back()+1;
	for(int next=smallest;next<n;next++){
		picked.push_back(next);
		pick(picked,n,toPick-1);
		picked.pop_back();
	}

}	





int main(){
	vector<int> picked;
	pick(picked,7,6);
	return 0;
}
