#include <stdio.h>

int main(){
    int N;
    int i;
    int sum=1;
    scanf("%d",&N);
        
    if(N<0 || N>12)
        return 0;

    for(i=1;i<=N;i++){
        sum*=i;
    }
    printf("%d\n",sum);

    return 0;


}
