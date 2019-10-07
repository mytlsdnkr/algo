#include <cstdio>

char board[3000][3000];
void init(){
	for(int i=0;i<3000;i++){
		for(int j=0;j<3000;j++){
			board[i][j]=' ';
		}
	}


}

void recursive(int N, int x, int y){
	if(N==1){
		board[x][y]='*';
		return ;
	}

	int div=N/3;

	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==1 && j==1){
				continue;
			}
			recursive(div,x+(div*i),y+(div*j));
		}
	}
	return ;




}


int main(){
	int N;
	scanf("%d",&N);
	init();
	recursive(N,0,0);

	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			printf("%c",board[i][j]);
		}
		printf("\n");
	}




}
