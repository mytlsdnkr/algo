#include <iostream>
#include <cstring>
using namespace std;

#define SIZE 1000001

int main(){
    int count[26]={0,};
    char str[SIZE];
    cin>>str;
    int i=0,len=0,save=0;
    bool flag=false;

    len=strlen(str);
    
    for(i=0;i<len;i++){
        if(str[i]>='A' && str[i]<='Z'){
            count[str[i]-'A']++;
        }else{
            count[str[i]-'a']++;

        }

    }

    int max=count[0];

    for(i=1;i<26;i++){
        if(count[i]>max){
            max=count[i];
            save=i;
            flag=false;
        }else if(count[i]==max){
            flag=true;
        }
    }

    if(flag)
        cout<<"?"<<endl;
    else
        cout<<char(save+65)<<endl;


    
    
}
