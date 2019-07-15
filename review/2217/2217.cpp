#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a, int b){

    return a>b;
}
int main(){
    int num;
    int i;
    cin>>num;
    int *rope=new int[num];

    for(i=0;i<num;i++){
        cin>>rope[i];
    }
    sort(rope,rope+num,cmp);
    int sum=0;
    int result=0;

    for(i=0;i<num;i++){
        sum+=rope[i]/(i+1);
        if(result<rope[i]*(i+1))
            result=rope[i]*(i+1);
    }

    cout<<result<<endl;


    return 0;

    

    

}
