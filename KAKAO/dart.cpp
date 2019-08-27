#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;


int main(){
	char input[100];
	cin>>input;
	char num[2];
	int score1,score2;
	int bonus;
	int sum=0;

	int i=0,j=0;
	while(1){
		num[j++]=input[i++];
		if(input[i]=='S'){
			score1=atoi(num);
			break;
		}
		else if(input[i]=='D'){
			score1=pow(atoi(num),2);
			break;
		}
		else if(input[i]=='T'){
			score1=pow(atoi(num),3);
			break;
		}

	}
	i++;
	j=0;
	cout<<score1<<endl;

	while(1){
		num[j++]=input[i++];
		if(input[i]=='S'){
			score2=atoi(num);
			break;
		}
		else if(input[i]=='D'){
			score2=pow(atoi(num),2);
			break;
		}
		else if(input[i]=='T'){
			score2=pow(atoi(num),3);
			break;
		}
	}
	i++;
	j=0;
	cout<<"Hi:"<<input[i]<<i<<endl;
	cout<<score2<<endl;
	if(input[i]=='\0'){
		cout<<score1+score2<<endl;
		return 0;
	}else if(input[i]=='*'){
		++i;
		while(1){
			num[j++]=input[i++];
			if(input[i]=='S'){
				bonus=atoi(num);
				break;
			}
			else if(input[i]=='D'){
				bonus=pow(atoi(num),2);
				break;
			}
			else if(input[i]=='T'){
				bonus=pow(atoi(num),3);
				break;
			}
		}
		sum+=score1*2+score2*2+bonus;
		return 0;
	}else if(input[i]=='#'){
		++i;
		while(1){
			num[j++]=input[i++];
			if(input[i]=='S'){
				num[j]='\0';
				bonus=atoi(num);
				break;
			}
			else if(input[i]=='D'){
				num[j]='\0';
				bonus=pow(atoi(num),2);
				break;
			}
			else if(input[i]=='T'){
				num[j]='\0';
				bonus=pow(atoi(num),3);
				break;
			}else
				continue;
		}
		sum+=score1+(-1*score2)+bonus;
		cout<<sum<<endl;
		return 0;
	}
	return 0;
}



