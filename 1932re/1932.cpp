#include <iostream>
using namespace std;

int Max(int num, int num1){
    if(num>num1)
        return num;
    else 
        return num1;

}
int main(){
    int size;
    int i,j;
    int **triangle;
    int max;
    cin>>size;
    if(size<0 || size>500){
        return 0;
    }
    triangle=new int* [size+1];
    for(i=0;i<size+1;i++)
        triangle[i]=new int[size+1];

    for(i=1;i<=size;i++){
        for(j=1;j<=i;j++){
            cin>>triangle[i][j];
            if(j==1){
                triangle[i][j]+=triangle[i-1][j];
            }else if(i==j){
                triangle[i][j]+=triangle[i-1][j-1];
            }else{
                triangle[i][j]+=Max(triangle[i-1][j-1],triangle[i-1][j]);
            }
        }

    }
    max=triangle[size][0];
    for(i=2;i<=size;i++){
        if(max<triangle[size][i])
            max=triangle[size][i];
    }
    cout<<max<<endl;



}
