#include <iostream>
using namespace std;

int main(){
    int numberofcoin;
    int target;
    int i;
    int count=0;
    cin>>numberofcoin>>target;

    int *arr=new int[numberofcoin];

    if(numberofcoin<1 || numberofcoin>10 ||target <1 || target>100000000)
        return 0;

    for(i=0;i<numberofcoin;i++){
        cin>>arr[i];
        if(arr[i]<1 || arr[i]>1000000)
            return 0;
    }

    for(i=numberofcoin-1;i>=0;i--){
        if(arr[i]<=target){
            count+=target/arr[i];
            target%=arr[i];
            if(target==0)
                break;
        }

    }

    cout<<count<<endl;

}



