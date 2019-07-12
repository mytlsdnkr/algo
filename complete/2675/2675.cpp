#include <iostream>
#include <cstring>
using namespace std;

#define SIZE 21
#define ERR_TESTCASE -1 //if return -1, testCase is out of range
#define ERR_RECURSIVE -2 //if return -2 recursive is out of range

int main(){
    int testCase;
    cin>>testCase;
    if(testCase<1 || testCase>1000)
        return ERR_TESTCASE;

    int recursive;
    char str[SIZE];
    int i,j,k;
    int len;
    

    for(i=0;i<testCase;i++){

        cin>>recursive;
        if(recursive<1 || recursive>8)
            return ERR_RECURSIVE;
        cin>>str;
        len=strlen(str);

        for(j=0;j<len;j++){
            for(k=0;k<recursive;k++)
                cout<<str[j];
            
            
        }
        cout<<endl;


        

    }
    return 0;

}
