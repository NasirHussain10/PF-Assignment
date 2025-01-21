#include<iostream>
using namespace std;
   int main(){
   	int num=1 , pos=0 , neg=0;
   	
   	    while(num!=0){
		   
   	    cout<<"Enter any interger: "<<endl;
   	    cin>>num;
   	        if(num>0){
   	    	pos++;
		    }
		    else if(num<0){
			neg++;
		    }
		    else{
			
		cout<<"The number of positive integer is: "<<pos<<endl;
		cout<<"The number of negative integer is: "<<neg<<endl;    
	}
       }
    return 0;  
   }
