#include<iostream>
using namespace std;
  int main(){
  	int arr[3],arr2[3],sum=0;

  	for(int i=0 ; i<3 ; i++){
  		cout<<"Enter element "<<i+1<<" : "<<endl;
  		cin>>arr[i];
  		arr2[i]=arr[i];
	  }
	  cout<<"The elements stored in first array are: ";
	  for(int k=0 ; k<3 ; k++){
	    cout<<arr[k]<<" , ";
	  }
	  cout<<"\n\nThe elements copied into second array are: ";
	  for(int j=0 ; j<3 ; j++){
	  	cout<<arr2[j]<<" , ";
	  }
	  cout<<"\n\nSum: ";
	  for(int a=0 ; a<3 ; a++){
	  	if(arr2[a]%2==0){
	  		cout<<arr2[a]<<" + ";
	  		sum=sum+arr2[a];
		  }
	  }
	  cout<<" = "<<sum;
  	return 0;
  }
