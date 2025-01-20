#include<iostream>
using namespace std;
    int main(){
    	int nth , sum ,i=1 ;
    	cout<<"Enter nth term: "<<endl;
    	cin>>nth;
    	
    	while( i<=nth){
    		cout<<i<<" * "<<i<<" = "<<i*i<<endl;
    		sum=sum+(i*i);
    		i++;
		}
		cout<<"The sum of above series is: "<<sum<<endl;
		
    	return 0;
	}
