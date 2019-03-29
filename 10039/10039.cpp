#include <iostream>
using namespace std;

int main(){
    int score[5];
    int i=0;
    int sum=0;
    int avg;

    for(i=0;i<5;i++){
        cin>>score[i];

        if(score[i]<40)
            score[i]=40;

        sum+=score[i];
        
    }
    avg=sum/5;

    cout<<avg<<endl;

}
