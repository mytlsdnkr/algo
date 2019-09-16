#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int freq[1000001];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int N;
	cin>>N;

	vector<int> arr(N);
	vector<int> result(N);
	stack<int> st;
	int i;
	for(i=0;i<N;i++){
		cin>>arr[i];
		freq[arr[i]]+=1;
	}

	st.push(0);

	for(i=1;i<N;i++){
		if(st.empty())
			st.push(i);

		while(!st.empty() && freq[arr[st.top()]]<freq[arr[i]]){
			result[st.top()]=arr[i];
			st.pop();
		}
		st.push(i);
	}

	while(!st.empty()){
		result[st.top()]=-1;
		st.pop();
	}

	for(i=0; i<N;i++){
		cout<<result[i]<<' ';
	}
	cout<<"\n";

}
