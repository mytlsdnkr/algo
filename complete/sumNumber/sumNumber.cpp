#include <iostream>
#include <cstring>

#define LEN 256
using namespace std;

int main(){
    int digit;
    cin>>digit;

    char num[LEN];
    cin>>num;

    int sum=0;
    int i;
    int char_to_int=0;
    int len=strlen(num);

    for(i=0;i<len;i++){
        char_to_int=num[i]-'0';
        sum+=char_to_int;
    }

    cout<<sum<<endl;
    return 0;
}
