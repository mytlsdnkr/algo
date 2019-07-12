#include <iostream>
using namespace std;

long long fibo(int n){
    long long arr[91]={0,};
    int i;
    arr[0]=0;
    arr[1]=1;
    for(i=2;i<=90;i++)
        arr[i]=arr[i-1]+arr[i-2];

    return arr[n];
}
int main(){
    int n;
    cin>>n;

    if(n>90)
        return 0;
    cout<<fibo(n)<<endl;

    return 0;

}
