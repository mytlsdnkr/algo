#include <iostream>
using namespace std;

int find_number_count(int target){
    int count=0;
    while(1){
        if(target==0)
            break;
        target/=10;
        count++;
    }
    
    return count;
}
int main(){
    int target;
    int number[10]={0,1,2,3,4,5,6,7,8,9};
    int broken;
    int init=100;
    int i=0,j=0,k=0;
    int num;
    int count;
    int temp[10]={ 0,};

    cin>>target;
    if(target <0 || target > 500000)
        return 0;
    
    cin>>broken;
    for(i=0;i<broken;i++){
        cin>>num;
        number[num]=-1;
    }

    count=find_number_count(target);

    for(i=0;i<10;i++){
        if(number[i]==-1)
            continue;
        for(j=0;j<count;j++)
            number[i]*=10;
        int diff=target-number[i];
        if(diff<0)
            diff*=-1;
        temp[k++]=diff
    }

    for(i=0;i<10;i++){
        cout<<temp[i]<<endl;
    }


    


    
    
    


}
