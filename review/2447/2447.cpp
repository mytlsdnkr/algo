#include <iostream>
#include <cstdio>
using namespace std;

char map[3000][3000];

void init(){
	for(int i=0;i<3000;i++){
		for(int j=0;j<3000;j++){
			map[i][j]=' ';
		}
	}
}

void recursive(int N, int x, int y){
	if(N==1){
		map[x][y]='*';
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
	cin>>N;
	init();
	recursive(N,0,0);

	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			printf("%c",map[i][j]);
		}
		printf("\n");
	}
}
