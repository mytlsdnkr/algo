#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N;
	cin>>N;
	int num,i,j;
	vector<int> arr;
	vector<int> result(N);
	stack<int> st;
	for(i=0;i<N;i++){
		cin>>num;
		arr.push_back(num);
	}

	st.push(0);

	for(i=1;i<N;i++){
		if(st.empty())
			st.push(i);
		while(!st.empty() && arr[st.top()]<arr[i]){
			result[st.top()]=arr[i];
			st.pop();
		}
		st.push(i);
	}
	while(!st.empty()){
		result[st.top()]=-1;
		st.pop();
	}

	for(i=0;i<N;i++){
		cout<<result[i]<<' ';
	}

	cout<<"\n";




	}




