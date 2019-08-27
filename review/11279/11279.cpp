#include <iostream>
using namespace std;
#define SIZE 256

void Addelement(int heap[], int i){
    int parentindex=i/2;
    int temp;

    while(parentindex!=1){
        if(heap[i]>heap[parentindex]){
        }else{
            break;
        }
    }

}
int main(){
    int heap[SIZE]={0,};
    int numberofexp;
    int num;
    cin>>numberofexp;
    int i=1;

    for(i=1;i<numberofexp+1;i++){
        cin>>num;
        if(num==0){
            cout<<heap[1];
            heap[1]=heap[i];

            continue;
        }
        if(num>0){
            heap[i]=num;
            Addelement(heap,i);
            
        }
    }

}


