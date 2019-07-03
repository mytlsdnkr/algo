#include <iostream>
#include <cstring>
using namespace std;
#define SIZE 5

typedef struct queue{
    int arr[SIZE];
    int rear;
    int front;
    int size;


}queue;

void initqueue(queue *q){
    q->rear=0;
    q->front=0;
    q->size=0;
    
}


void push(queue *q,int value){
    if(q->front==(q->rear+1)%SIZE)
        return ;
        
    else{
        q->rear=(q->rear)%SIZE;
        q->arr[q->rear++]=value;
        q->size++;
    }


}
bool empty(queue *q){
    if(q->front==q->rear)
        return true;
    else{
        return false;
    }
}
int pop(queue *q){
    int temp;
    if(empty(q))
        return -1;
    else{
        q->front=(q->front)%SIZE;
        temp=q->arr[q->front++];
        q->size--;

    }
    return temp;

}
int front(queue *q){
    if(empty(q))
        return -1;

    return q->arr[q->front];

    
}

int back(queue *q){
    if(empty(q))
        return -1;
    return q->arr[q->rear-1];

}
int main(){
    queue q;
    initqueue(&q);
    int numberOfcommands;
    char action[6];
    int value=0;
    int i=0;

    cin>>numberOfcommands;
    if(numberOfcommands<1 || numberOfcommands>10000)
        return 0;

    for(i=0;i<numberOfcommands;i++){
        cin>>action;
        if(!strcmp(action,"push")){
            cin>>value;
            if(value>100000 || value < 1)
                return 0;
            push(&q,value);
        }else if(!strcmp(action,"pop")){
            cout<<pop(&q)<<endl;
        }else if(!strcmp(action,"size")){
            cout<<q.size<<endl;
        }else if(!strcmp(action,"front")){
            cout<<front(&q)<<endl;
        }else if(!strcmp(action,"back")){
            cout<<back(&q)<<endl;
        }else if(!strcmp(action,"empty")){
            cout<<empty(&q)<<endl;
        }
    }



}


