#include <iostream>
using namespace std;

void bubbleSort(int numberArray[],int size){
    int i,j,temp;
    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(numberArray[i]>numberArray[j]){
                temp=numberArray[j];
                numberArray[j]=numberArray[i];
                numberArray[i]=temp;
            }
        }
    }
}

void insertSort(int numberArray[],int size){
    int i,j,key;

    for(i=1;i<size;i++){
        key=numberArray[i];
        for(j=i-1;j>=0;j--){
            if(numberArray[j]>key){
                numberArray[j+1]=numberArray[j];
            }else{
                break;
            }
        }
        numberArray[j+1]=key;
        
    }
}

int main(){
    int size;
    cin>>size;
    int *numberArray=new int[size];
    int i;
    for(i=0;i<size;i++){
        cin>>numberArray[i];
    }
    bubbleSort(numberArray,size);



    for(i=0;i<size;i++){
        cout<<numberArray[i]<<endl;
    }



    delete[] numberArray;

    return 0;
    
}
