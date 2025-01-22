#include<iostream>
using namespace std;
   int main(){
   	int start=2 , end=25;
   	for (int i=start ; i<=25 ; i++){
   		if(i==13 || i==16 || i==19){
   			continue;
		   }
		else if(i==23){
			break;
		}
		  cout<<i<<endl;   
	   }
   	return 0;
   }
