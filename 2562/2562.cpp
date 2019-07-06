#include <iostream>
using namespace std;

int main(){
    int max=0,i,index;
    int arr[9];

    for(i=0;i<9;i++){
        cin>>arr[i];
        if(arr[i]>max){
            max=arr[i];
            index=i;
        }
    }
    cout<<max<<endl;
    cout<<i-1<<endl;

}
