#include <iostream>
#include <cstring>
using namespace std;
#define SIZE 256
int main(){
    int alphabetNumber[26];
    fill_n(alphabetNumber,26,-1);
    char str[SIZE];
    cin>>str;

    int i,len=0;
    len=strlen(str);
    for(i=0;i<len;i++){
        int asci=(int)str[i]-97;

        if(alphabetNumber[asci]==-1){
            alphabetNumber[asci]=i;
        }


    }

    for(i=0;i<26;i++){
        cout<<alphabetNumber[i]<<" ";
    }
    cout<<endl;

}
