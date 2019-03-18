#include <iostream>
using namespace std;

int main(){
    int num[3];
    int i;
    for(i=0;i<3;i++)
        cin>>num[i];

    int min=num[0];
    for(i=1;i<3;i++){
        if(min>num[i])
            min=num[i];
    }

}
