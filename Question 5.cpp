#include<iostream>
using namespace std;
   int main(){
   	int i=5 , num=0;
   	do{
   		num=i;
   		do{
   			cout<<num;
   			num--;
		   }
		   while(num>=1);
		   cout<<endl;
		   i--;
	}
	  while(i>=1);
	   
   }
