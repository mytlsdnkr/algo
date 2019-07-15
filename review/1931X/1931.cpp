#include <iostream>
using namespace std;

typedef struct t{
    int start;
    int end;
    int diff;
}conference;

int main(){
    int numerofconference;
    int i;
    int tempEnd;
    int tempDiff;
    int tempindex;
    int count=0;
    cin>>numerofconference;
    if(numerofconference<1 || numerofconference>100000){
        return 0;
    }
    conference *conf = new conference[numerofconference];

    for(i=0;i<numerofconference;i++){
        cin>>conf[i].start>>conf[i].end;
        conf[i].diff=conf[i].end-conf[i].start;
    }
    tempEnd=conf[0].end;
    tempDiff=9999;

    for(i=1;i<numerofconference;i++){
        if(tempEnd<=conf[i].start){
            tempEnd=conf[i].end;
            tempDiff=conf[i].diff;
            tempindex=i;
        }
    }

    cout<<count<<endl;

}
