#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <cstring>
using namespace std;

int main(){
    char exp[1024];
    int result=0;
    char temp[5];
    bool flag=false;
    cin>>exp;
    int i=0,j=0;
    int len=strlen(exp);

    for(i=0;i<len;i++){
        if(exp[i]=='+' || exp[i]=='-' || exp[i]=='\0'){
            if(!flag && exp[i]=='-'){
                result+=atoi(temp);
                cout<<"1:"<<result<<endl;
                memset(temp,'\0',5);
                j=0;
                flag=true;
                continue;
                if(flag){
                    result-=atoi(temp);
                    cout<<"2:"<<result<<endl;
                    memset(temp,'\0',5);
                    j=0;
//                    flag=false;
                    continue;
                }

            }    
        }else{
            temp[j++]=exp[i];
        }

    }
    cout<<result<<endl;

}
