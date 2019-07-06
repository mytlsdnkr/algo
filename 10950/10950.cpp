#include <iostream>
using namespace std;

int main(){
    int A,B;
    int testcase;
    int i;

    cin>>testcase;
    for(i=0;i<testcase;i++){
        cin>>A>>B;
        if((A<0 || A>10) || ( B<0 || B>10))
            return 0;
        cout<<A+B<<endl;
    }
   return 0;

}
