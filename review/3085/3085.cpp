#include <iostream>
#include <vector>

using namespace std;


int check(vector<string> board){
	int count=1;
	int i=0,j=0;
	int len=board.size();
	int temp=0;
// row 
	for(i=0;i<len;i++){
		for(j=1;j<len;j++){
			if(board[i][j]==board[i][j-1]){
				count++;
			}else{
				count=1;
			}
			if(temp<count)
				temp=count;
		}
	count=1;

	for(j=1;j<len;j++){
		if(board[j][i]==board[j-1][i]){
			count++;
		}else{
			count=1;
		}

		if(temp<count)
			temp=count;
	}
	}


	return temp;

}
int main(){
	int N;
	cin>>N;
	vector<string> board(N);

	int i=0,j=0;
	for(i=0;i<N;i++){
		cin>>board[i];
	}

	int answer=0;
	int count=0;
	int temp;

	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(j+1<N){
			swap(board[i][j],board[i][j+1]);
			temp=check(board);
			if(temp>answer){
				answer=temp;
			}
			swap(board[i][j],board[i][j+1]);
		}
			if(i+1<N){
				swap(board[i][j],board[i+1][j]);
				temp=check(board);
				if(temp>answer){
					answer=temp;
				}
				swap(board[i][j],board[i+1][j]);
		}
		}
	}

	cout<<answer<<endl;
	return 0;
}
