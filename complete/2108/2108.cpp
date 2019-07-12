#include <iostream>
#include <cmath>
using namespace std;

void quick_sort(int *data, int start, int end){
    if(start >= end){
        return; 
    }
    
    int pivot = start;
    int i = pivot + 1; 
    int j = end; 
    int temp=0;;
    
    while(i <= j){
    
        while(i <= end && data[i] <= data[pivot]){
            i++;
        }
        while(j > start && data[j] >= data[pivot]){
            j--;
        }
        
        if(i > j){
        
            temp = data[j];
            data[j] = data[pivot];
            data[pivot] = temp;
        }else{
          
            temp = data[i];
            data[i] = data[j];
            data[j] = temp;
        }
    } 
    
  
    quick_sort(data, start, j - 1);
    quick_sort(data, j + 1, end);
}

double getAverage(int num[],int len){
	int sum=0;
	double average=0;
	int i=0;
	for(i=0;i<len;i++){
		sum+=num[i];
	}
	
	average=(double)sum/(double)len;
	
	return round(average);
	
	
}

int getMid(int num[],int len){
	return num[len/2];
}


int getRange(int num[],int len){
	return num[len-1]-num[0];
}

int getMaxCount(int num[],int len){
	
	int *countArray=new int[len];
	int count=0;
	int i=0;
	int max=0;
	int beforeIndex=0;
	int afterIndex=0;
	bool flag=true;
	
	if(len==1){
		return 0;
	}
	for(i=0;i<len;i++){
		countArray[i]=0;
	}

	
	for(i=0;i<len;i++){
		countArray[i]++;
		if(num[i]==num[i+1]){
			countArray[i]++;
			continue;
		}
	}

	max=countArray[0];
	beforeIndex=0;
	afterIndex=0;
	
	
	
	for(i=1;i<len;i++){
		beforeIndex=afterIndex;
		afterIndex=i;
		if(max==countArray[i]){
			count++;
			flag=true;
		}
		if(max<countArray[i]){			
			max=countArray[i];
			flag=false;
		}
		
	}
	
	
	if(flag && count==len-1){ //모든 countArray의 값들이 모두 같을 때
		return 1;
	}else if(flag){//countArray의 값들중에 중복된 값이 있을 경우
		return beforeIndex;
	}
	else{//countArray에서 중복된 값이 없을 때
		return afterIndex;
			
	}
	delete [] countArray;
}


int main(){
	int N=0;
	cin>>N;
	if(N%2==0)
		return 0;
	
	
	int *numArray=new int[N];
	int i=0;
	
	for(i=0;i<N;i++){
		cin>>numArray[i];
		if(numArray[i]< -4000 && numArray[i]>4000)
			return 0;
	}
	
	cout<<endl;
	quick_sort(numArray,0,N-1);
	cout<<(int)getAverage(numArray,N)<<endl;
	cout<<getMid(numArray,N)<<endl;
	cout<<numArray[getMaxCount(numArray,N)]<<endl;
	cout<<getRange(numArray,N)<<endl;
	
	
	delete [] numArray;
	
	return 0;
}
	