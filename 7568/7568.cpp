#include <iostream>
using namespace std;

typedef struct person{
    int weight;
    int height;
    int rank;
}person;


int main(){
    int numberOfPerson,i,j;
    cin>>numberOfPerson;

    if(numberOfPerson<2 || numberOfPerson>50)
        return 0;
    person *p=new person[numberOfPerson];

    for(i=0;i<numberOfPerson;i++){
        cin>>p[i].height>>p[i].weight;
        if(p[i].height<10 || p[i].height>200 || p[i].weight<10 || p[i].weight>200)
            return 0;
        p[i].rank=1;
    }
    for(i=0;i<numberOfPerson-1;i++){
        for(j=i+1;j<numberOfPerson;j++){
            if(p[i].height>p[j].height){
                if(p[i].weight>p[j].weight){
                    p[j].rank++;
                }

            }else if(p[i].height<p[j].height){
                if(p[i].weight<p[j].weight){
                    p[i].rank++;
                }
            }

        }
    }

    for(i=0;i<numberOfPerson;i++){
        cout<<p[i].rank<<" ";
    }

}
