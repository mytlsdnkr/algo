#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int numberOfperson;
    cin>>numberOfperson;
    if(numberOfperson<1 || numberOfperson>1000)
        return 0;

    int *time=new int[numberOfperson];
    int i,j;
    int sum=0;

    for(i=0;i<numberOfperson;i++){
        cin>>time[i];
        if(time[i]<1 || time[i]>1000)
            return 0;
    }

    sort(time,time+numberOfperson);

    for(i=1;i<numberOfperson;i++){
        for(j=0;j<=i;j++){
            sum+=time[j];
        }
        
    }
    sum+=time[0];

    cout<<sum<<endl;
    
}
