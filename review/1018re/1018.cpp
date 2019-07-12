#include <iostream>
using namespace std;

int eightbyeight(char **board){
    int i,j,count;
    count=0;

    //make 8x8
    //check last column character same next row first column
    for(i=0;i<7;i++){
        if(board[i][7]=='W'){
            if(board[i+1][0]=='B'){
                count++;
        }
        }else{
            if(board[i+1][0]=='W'){
                count++;
                
        }
    }
    }
    
    
    for(i=0;i<8;i++){
        for(j=0;j<7;j++){
            if(board[i][j]=='W'){
                if(board[i][j+1]=='W'){
                    board[i][j+1]='B';
                    count++;
                }else
                    continue;
            }else{
                if(board[i][j+1]=='B'){
                    board[i][j+1]='W';
                    count++;
                    
            }else
                continue;
        }
            
    }
    }

    return count;

}

int randombyrandom(char **board,int row, int column){
    int rowcount,columncount,i,j;
    rowcount=0;
    columncount=0;
    int result=0;
    int min=0;
    char **arr=new char *[8];
    for(i=0;i<row;i++)
        arr[i]=new char[8];

    while(rowcount+8<row && columncount+8<column){
        for(i=0;i<8;i++){
            for(j=0;j<8;j++){
                arr[i][j]=board[i+rowcount][j+columncount];
            }
        }

        result=eightbyeight(arr);
        if(result<min){
            min=result;
        }
        
        if(columncount+9>column){
            if(rowcount+9>row){
                continue;
            }else{
                columncount=0;
                rowcount++;
            }
        }else if(columncount+9<column){
            columncount++;
        }
        
            


    }

    return min;

    

}

int main(){
    int row,column,i,j,count,k;
    cin>>row>>column;
    count=0;
    i=0;
    j=0,k=0;
    


    //allocate
    char **board=new char *[row];
    for(i=0;i<row;i++)
        board[i]=new char[column];



    //input
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            cin>>board[i][j];
        }
    }
    if(row<8 || row >50 || column<8 || column >50)
        return 0;


    if(row==8 && column==8)
        cout<<eightbyeight(board)<<endl;
    else{
        cout<<randombyrandom(board,row,column)<<endl;
    }
        //delete
        for(i=0;i<row;i++)
            delete []board[i];
        delete []board;
        return 0;


    

}
