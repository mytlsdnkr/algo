#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

typedef struct WORD{
    char name[50];
    int len;
}WORD;

void swapStruct(WORD *word1, WORD *word2){
    WORD temp;
    temp=*word1;
    *word1=*word2;
    *word2=temp;
}
void swap(int *num, int *num1){
    int temp;
    temp=*num;
    *num=*num1;
    *num1=temp;


}
void swapWord(char word[], char word1[]){

    char temp[50];
    strcpy(temp,word);
    strcpy(word,word1);
    strcpy(word1,temp);

}

int partition(WORD list[], int left, int right){
    int pivot;
    int low, high;

    low = left;
    high = right + 1;
    pivot = list[left].len; // 정렬할 리스트의 가장 왼쪽 데이터를 피벗으로 선택(임의의 값을 피벗으로 선택)

    /* low와 high가 교차할 때까지 반복(low<high) */
    do{
        /* list[low]가 피벗보다 작으면 계속 low를 증가 */
        do {
            low++; // low는 left+1 에서 시작

        } while (low<=right && list[low].len<pivot);

        /* list[high]가 피벗보다 크면 계속 high를 감소 */
        do {
            high--; //high는 right 에서 시작

        } while (high>=left && list[high].len>pivot);

        // 만약 low와 high가 교차하지 않았으면 list[low]를 list[high] 교환
        if(low<high){
            swapStruct(&list[low],&list[high]);
            //  swap(list[low].len, list[high].len);
            // swapWord(list[low].name,list[high].name);
        }
    } while (low<high);

    // low와 high가 교차했으면 반복문을 빠져나와 list[left]와 list[high]를 교환
    swapStruct(&list[left],&list[high]);
    //swap(list[left].len, list[high].len);
    //swapWord(list[left].name,list[high].name);
    // 피벗의 위치인 high를 반환
    return high;
}
// 퀵 정렬
void quick_sort(WORD list[], int left, int right){

    /* 정렬할 범위가 2개 이상의 데이터이면(리스트의 크기가 0이나 1이 아니면) */
    if(left<right){
        // partition 함수를 호출하여 피벗을 기준으로 리스트를 비균등 분할 -분할(Divide)
        int q = partition(list, left, right); // q: 피벗의 위치

        // 피벗은 제외한 2개의 부분 리스트를 대상으로 순환 호출
        quick_sort(list, left, q-1); // (left ~ 피벗 바로 앞) 앞쪽 부분 리스트 정렬 -정복(Conquer)
        quick_sort(list, q+1, right); // (피벗 바로 뒤 ~ right) 뒤쪽 부분 리스트 정렬 -정복(Conquer)
    }

}


void Word_Sort(WORD array[],  int N){
    int i=0;
    int j=0;
    int k=0;
    int len;
    bool lenFlag=false;


    for(i=0;i<N-1;i++){
        for(j=i+1;j<N;j++){
            if(array[i].len!=array[j].len){
                lenFlag=true;
                break;
            }else{
                if(!strcmp(array[i].name,array[j].name)){
                    continue;
                }
                    len=array[i].len;
                    for(k=0;k<array[i].len;k++){
                        if(array[i].name[k]>array[j].name[k]){
                            swapStruct(&array[i],&array[j]);
                        }
                    }
                }
            }
            if(lenFlag){
                lenFlag=false;
                continue;
            }


        }
    }

int main(){
    int N;
    cin>>N;

    WORD *array=new WORD[N];
    int i;


    for(i=0;i<N;i++){
        cin>>array[i].name;
        array[i].len=strlen(array[i].name);
    }

    quick_sort(array,0,N-1);
    Word_Sort(array,N);


    for(i=0;i<N;i++){
        if(!strcmp(array[i].name,array[i+1].name))
            continue;

        cout<<"길이:"<<array[i].len<<endl;
        cout<<"단어:"<<array[i].name<<endl;

    }


    delete[] array;

    return 0;


}

