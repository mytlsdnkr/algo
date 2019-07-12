#include <iostream>
using namespace std;

int find_max(int *arr, int size){
    int i=0;
    int max=0;
    for(i=0;i<size;i++){
        if(max<arr[i])
            max=arr[i];
    }

    return max;

}
int main(){
    int size;
    int *arr;
    int *dp;
    int i=0,j;

    cin>>size;
    if(size<1 || size >1000)
        return 0;
    arr=new int[size];
    dp=new int[size];
    for(i=0;i<size;i++){
        cin>>arr[i];
        if(arr[i]<1 || i>1000)
            return 0;

    }
    int max=find_max(arr,size);
    int diffmin=10000;
    int index;

    for(i=0;i<size-1;i++){
        for(j=i+1;j<size;j++){
            if(diffmin>arr[j]-arr[i]){
                diffmin=arr[j]-arr[i];
                index=j;
            }
            if(diffmin==0)
                continue;
        }
        dp[i]=index;
        diffmin=10000;
    }

    for(i=0;i<size;i++){
        cout<<dp[i]<<endl;
    }








}
