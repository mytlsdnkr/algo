#include <iostream>
using namespace std;

int main(){
    int A,B;
    while(1){
        cin>>A>>B;
        if(A==0 && B==0)
            break;
        if((A<0||A>10)||(B<0||B>10))
            return 0;
        cout<<A+B<<endl;
        

    }
}

