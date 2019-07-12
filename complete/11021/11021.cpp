#include <iostream>
using namespace std;

int main(){
    int testCase,i,A,B;
    
    cin>>testCase;
    for(i=0;i<testCase;i++){
        cin>>A>>B;
        if((A<0 || A>10) || (B<0 || B>10)){
            return 0;
        }
        cout<<"Case #"<<i+1<<": "<<A+B<<endl;
    }
    return 0;
}
