#include <iostream>
#include <cstring>
using namespace std;

#define LEN 256

//If return -1, string's length is over 100

bool checkLen(char str[]){
    if(strlen(str)>100)
        return false;

    return true;
}

int main(){
    char str[LEN];
    cin>>str;

    if(!checkLen(str))
        return -1;

    int i=0;
    int len = strlen(str);
    for(i;i<len;i++){
        if(i%10!=0){
            cout<<str[i];
        }else{
            if(i==0){

                cout<<str[i];
                continue;
            }
            cout<<endl;
        }
    }
}
