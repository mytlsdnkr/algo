#include <iostream>
#include <cstring>
#include <cstdlib>
#define SIZE 256
using namespace std;


void push(int number,int *stack){
	int i;
	for(i=0;i<SIZE;i++){
		if(stack[i]==0){
			stack[i]=number;
			return;
		}

	}


}

void pop(int *stack){
	int i=SIZE-1;
	for(i;i>=0;i--){
		if(stack[i]!=0){
			cout<<stack[i]<<endl;
			stack[i]=0;
			return;

		}

	}

	cout<<-1<<endl;

}

void size(int *stack){
	int i=0;
	int count=0;
	for(i;i<SIZE;i++){
		if(stack[i]!=0){
			count++;
		}else
			break;

	}

	cout<<count<<endl;
	return;
}

void empty(int *stack){
	int i=0;
	for(i=0;i<SIZE;i++){
		if(stack[i]!=0){
			cout<<0<<endl;
			return ;
		}
	}
	cout<<1<<endl;
	return ;

}

void top(int *stack){
	int i=SIZE-1;

	for(i;i>=0;i--){
		if(stack[i]!=0){
			cout<<stack[i]<<endl;
			return ;
		}
	}

	cout<<-1<<endl;
	return ;
}






int main(){
	int stack[SIZE]={0,};
	int numberOfinput;
	char action[10];
	int number=-1;
	cin>>numberOfinput;
	if(numberOfinput>10000)
		return 0;
	int i=0;
	int j=0;
	for(i;i<numberOfinput;i++){
		cin>>action;
		if(!strcmp(action,"push")){
			cin>>number;
			if(number>100000)
				return 0;
			push(number,stack);
		}
		else if(!strcmp(action,"pop")){
			pop(stack);
		}else if(!strcmp(action,"size")){
			size(stack);
		}else if(!strcmp(action,"empty")){
			empty(stack);
		}else if(!strcmp(action,"top")){
			top(stack);
		}

	}
	return 0;
}


