#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main(){
	int cacheSize;
	vector<string> cache;
	vector<string> cities;
	vector<string>::iterator it;
	int runtime=0;
	string input;
	string temp;

	cin>>cacheSize;
	while(1){
		cin>>input;
		if(cache.size()<cacheSize){
		cache.push_back(input);
		runtime+=5;
		}else{
				}

		}

	}
	
	
	

	





