#include <iostream>
#include <cstring>
using namespace std;
#define SIZE 128


int pop(int *queue){
    int i=0;
    int temp=0;
    if(queue[0]==0)
        return -1;
    else{
        temp=queue[0];
        for(i=1;i<SIZE-1;i++){
                queue[i-1]=queue[i];
                //queue[i]=queue[i+1];
    }
    return temp;
}
}


void push(int *queue,int value){
    int i=0;
    bool full=false;
    for(i=0;i<SIZE;i++){
        if(queue[i]==0){
            queue[i]=value;
            full=false;
            return ;
        }else{
            full=true;
        }
        
    }

    if(full){
        pop(queue);
        /*for(i=1;i<SIZE;i++){
            queue[i-1]=queue[i];
        }*/
        queue[i]=value;

    }else{
        return;
    }

}
int size(int *queue){
    int count=0,i=0;
    bool full=false;

    for(i=0;i<SIZE;i++){
        if(queue[i]!=0){
            count++;
            continue;
        }else{
            full=false;
            return count;
        }
    }
    full=true;
    if(full)
        return SIZE;

    return 0;


}

bool empty(int *queue){
    if(queue[0]==0)
        return true;
    else{
        return false;
    }
}
int front(int *queue){
    if(empty(queue))
        return -1;
    else{
        return queue[0];
    }
}

int back(int *queue){
    int i;
    if(empty(queue))
        return -1;

    for(i=0;i<SIZE;i++){
        if(queue[i]==0){
            return queue[i-1];
        }
    }
}
int main(){
    int numberOfcommands;
    char action[7];
    int queue[SIZE]={0,};
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
            push(queue,value);
        }else if(!strcmp(action,"pop")){
           
            cout<<pop(queue)<<endl;
        }else if(!strcmp(action,"size")){
            cout<<size(queue)<<endl;
        }else if(!strcmp(action,"front")){
            cout<<front(queue)<<endl;
        }else if(!strcmp(action,"back")){
            cout<<back(queue)<<endl;
        }else if(!strcmp(action,"empty")){
            cout<<empty(queue)<<endl;
        }

    }



}


