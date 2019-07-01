#include <iostream>
#include <cstring>
using namespace std;
#define SIZE 1024

static int index=0;

void push(int *stack,int num){


}


void pop(int *stack){

}

void empty(int *stack){

}

void top(int *stack){

}

void size(int *stack){

}



int main(){
    int stack[SIZE]={0,};
    int N,i,num;
    char command[10];


    cin>>N;
    for(i=0;i<N;i++){
        cin>>command>>num;
        if(!strcmp(command,"push"))
            push(stack,num);
        if(!strcmp(command,"pop"))
            pop(stack);
        if(!strcmp(command,"empty"))
            empty(stack);
        if(!strcmp(command,"top"))
            top(stack);
        if(!strcmp(command,"size"))
            size(stack);
    }
    


}
