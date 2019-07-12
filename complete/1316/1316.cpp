#include <iostream>
#include <cstring>
using namespace std;

#define SIZE 101

int main(){
    int numberOfword;
    cin>>numberOfword;
    char word[SIZE];
    char temp[26];
    int count=0;
    int s=0;
    int i=0;
    int j=0;
    int k=0;
    bool flag=false;
    int len=0;


    for(s=0;s<numberOfword;s++){

        cin>>word;
        len=strlen(word);

        for(i=0;i<len;i++){
            if(i==0){
                temp[j++]=word[i];
                continue;
            }

            if(word[i-1]==word[i])
                continue;
            else{
                for(k=0;k<j;k++){
                    if(word[i]==temp[k]){
                        flag=true;
                        break;
                    }
                }
            }
            if(flag){
                break;

            }else{
                temp[j++]=word[i];
            }
        }

        if(flag==false)
            count++;

        flag=false;
        j=0;

    }
    cout<<count<<endl;
}
