#include <iostream>
using namespace std;

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;

}


void quickSort(int left,int right, int* data) {
    int pivot = left;
    int j = pivot;
    int i = left+1;

    if (left < right) {
        for (; i <= right; i++) {
            if (data[i] > data[pivot]) {
                j++;
                swap(&data[j], &data[i]);
            }

        }
        swap(&data[left],&data[j]);
        pivot = j;

        quickSort(left, pivot-1,data);
        quickSort(pivot+1, right, data);

    }


}

int getSizeofArray(int N){
    int i=0;
    int count=0;

    while(N/10!=0){
        N/=10;
        count++;        
    }

    return count+1;



}

int main(){
    int N;
    int size,sum=0;
    int product=1;
    cin>>N;

    if(N>1000000000)
        return 0;

    size=getSizeofArray(N);
    int *array=new int[size];

    int i=0;

    for(i;i<size;i++){
        array[i]=N%10;
        N/=10;
    }

    quickSort(0,size-1,array);

    for(i=0;i<size;i++){
        cout<<array[i];
    }
    cout<<endl;



    return 0;


}

