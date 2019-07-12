#include <iostream>
using namespace std;
int main(){
    int hour,minute;
    cin>>hour>>minute;

    if((hour<0 || hour>24)||(minute<0 || minute>59))
        return 0;

    if(minute>=45){
        cout<<hour<<" "<<minute-45<<endl;;
        return 0;
    }else{
        minute-=45;
        minute*=-1;
        minute=60-minute;
        if(minute==60)
            minute=0;
        if(hour==0){
            hour=23;
        }else{
            hour-=1;
        }
        cout<<hour<<" "<<minute<<endl;;
        return 0;
    }
}
