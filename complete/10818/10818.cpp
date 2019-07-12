#include <iostream>
using namespace std;

int main(){
    int i=0,N,min=0,max=0;
    cin>>N;
    if(N<1 || N>1000000)
        return 0;
   int * arr=new int[N];
    for(i=0;i<N;i++){
        cin>>arr[i];
        if(arr[i]<-1000000 || arr[i]>1000000)
            return 0;
    }
    min=arr[0];
    max=arr[0];

    for(i=1;i<N;i++){
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }

    }
    cout<<min<<" "<<max<<endl;
    delete [] arr;
    return 0;

}
