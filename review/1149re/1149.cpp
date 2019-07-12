#include <iostream>
using namespace std;

int min(int num,int num1){
    if(num>num1)
        return num1;
    return num;
}
int main(){
    int numberOfhouse;
    int i,j;
    cin>>numberOfhouse;
    if(numberOfhouse>1000)
        return 0;
    int **house=new int*[numberOfhouse+1];
    for(i=1;i<=numberOfhouse;i++)
        house[i]=new int[3];

    int **dp=new int*[numberOfhouse+1];
    for(i=1;i<=numberOfhouse;i++)
        dp[i]=new int[3];

    for(i=1;i<=numberOfhouse;i++){
        for(j=1;j<=3;j++){
            cin>>house[i][j];
        }

    }
    dp[1][1]=house[1][1];
    dp[1][2]=house[1][2];
    dp[1][3]=house[1][3];

    for(i=2;i<=numberOfhouse;i++){
        dp[i][1]=min(dp[i-1][2],dp[i-1][3])+house[i][1];
        dp[i][2]=min(dp[i-1][1],dp[i-1][3])+house[i][2];
        dp[i][3]=min(dp[i-1][1],dp[i-1][2])+house[i][3];
    }

    int Min=dp[numberOfhouse][1];
    for(i=2;i<=3;i++){
        if(dp[numberOfhouse][i]<Min)
            Min=dp[numberOfhouse][i];
    }
      cout<<Min<<endl; 

    for(int i=0;i<numberOfhouse;i++){
        delete []house[i];
    }

    delete []house;

    for(int i=0;i<numberOfhouse;i++){
        delete []dp[i];
    }

    delete []dp;
}
