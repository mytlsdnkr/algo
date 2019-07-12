#include <iostream>
#define LEN 10001
using namespace std;


int FindSelfnumber(int num){
        int sum=num;
     
        while(1){
			if(num==0)
                 break;
			 sum+=num%10;
             num=num/10;
			 
                
        }

        return sum;
}

int main(){
        bool num[LEN];
        int i=0;

		int notSelfnumber;


        for(i=1;i<LEN;i++){
			notSelfnumber=FindSelfnumber(i);
			
			if(notSelfnumber<=LEN)
				num[notSelfnumber]=true;
             
        }

        for(i=1;i<LEN;i++){
			if(!num[i])
				cout<<i<<endl;

        }

        return 0;
}


                

                
                
                

