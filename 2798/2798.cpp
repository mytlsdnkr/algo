#include <iostream>
#define TEMPSIZE 100
using namespace std;

int main(){
    int numberOfCard,target,i,j,k;
    int tempindex=0;
    int max=0;
    int sum=0;
    i=0;
    j=0;
    k=0;
    cin>>numberOfCard>>target;
    int *deck=new int[numberOfCard];

    if(numberOfCard<3 || numberOfCard>100 || target<10 || target>300000)
        return 0;

    
    for(i=0;i<numberOfCard;i++){
        cin>>deck[i];
    }

    for(i=0;i<numberOfCard-2;i++){
        for(j=i+1;j<numberOfCard-1;j++){
            for(k=j+1;k<numberOfCard;k++){
                sum=deck[i]+deck[j]+deck[k];
                if(sum>max && sum<=target)
                    max=sum;
                
                
                
            }
        }
    }
    cout<<max<<endl;
    delete []deck;
    return 0;
    
    
}
