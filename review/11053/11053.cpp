#include <iostream>
using namespace std;

int main(){
    int A[1001];
    int dp[1001];
    int N;
    cin>>N;
    int i;
    for(i=0;i<N;i++){
        cin>>A[i];
    }

    for(i=0;i<N;i++){
            dp[i]=A[i];
        for(int j=0;j<i;j++){
            if(A[j]<A[i] && dp[i]<dp[j]+A[i]){
                dp[i]=dp[j]+A[i];
            }
        }
    }
    int max=dp[0];
    for(i=1;i<N;i++){
        if(max<dp[i]){
            max=dp[i];
        }
    }

    cout<<max<<endl;

    return 0;


}