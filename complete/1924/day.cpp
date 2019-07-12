#include <iostream>
using namespace std;


#define SUN 0
#define MON 1
#define TUE 2
#define WED 3
#define THU 4
#define FRI 5
#define SAT 6


int remainderDay(int sum){
    return sum%7;
}

void checkDay(int sum){
    switch(remainderDay(sum)){
        case 1:
            cout<<"MON"<<endl;
            break;
        case 2:
            cout<<"TUE"<<endl;
            break;
        case 3:
            cout<<"WED"<<endl;
            break;
        case 4:
            cout<<"THU"<<endl;
            break;
        case 5:
            cout<<"FRI"<<endl;
            break;
        case 6:
            cout<<"SAT"<<endl;
            break;
        case 0:
            cout<<"SUN"<<endl;
            break;
    }

}


int main(){
    int month,day;
    cin>>month>>day;

    int sum=0;
    int day_of_month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int i;
    for(i=0; i<month-1; i++)
        sum+=day_of_month[i];
    sum+=day;
    checkDay(sum);


    return 0;







}
