#include <iostream>
using namespace std;


int FindSelfnumber(int num){
        int sum=0;
        sum+=num;

        while(1){
                sum+=num%10;
                if(num/10==0)
                        break;
                num=num/10;
        }

        return sum;
}

int main(){
        int num[10000];
        int i=0;
        int j=0;

        for(i=0;i<10000;i++){
                num[i]=i+1;
        }
        i=1;


        while(1){
                for(j=0;j<10000;j++){
                        if(FindSelfnumber(i)==num[j]){
                                num[j]=-1;
                                break;
                        }
                
                }
                if(FindSelfnumber(i)>10000)
                        break;
                i++;
        }

        for(i=0;i<10000;i++){
                if(num[i]==-1)
                        continue;
                cout<<num[i]<<endl;
        }

        return 0;
}


                

                
                
                

