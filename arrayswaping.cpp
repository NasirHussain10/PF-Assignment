#include<iostream>
using namespace std;
  int main(){
  	int arr[3],arr2[3];
  	
  	cout<<"Array 1 : "<<endl<<endl;
  	
  	for(int i=0 ; i<3 ; i++){
  		cout<<"Enter element "<<i+1<<" : "<<endl;
  		cin>>arr[i];
  		arr2[i]=arr[i];
	  }
	  
	  cout<<"\n\nArray 2 values:"<<endl<<endl;
	  
	  for(int j=0 ; j<3 ; j++){
	  	cout<<"Element "<<j+1<<" : "<<arr2[j]<<endl;
	  }
  	return 0;
  }
