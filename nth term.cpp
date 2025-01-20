#include<iostream>
using namespace std;

     int main(){
        int value , sum=0 , incre=1;

        cout<<"Input the value for nth term: ";
        cin>>value;
            
            while(value!=0){
            cout<<"\n"<<incre<<" * "<<incre<<" = "<<incre*incre<<endl;
            sum=sum+(incre*incre);
            value--;
            incre++;
            }
              cout<<"\nThe sum of above series is: "<<sum<<endl;
              
        return 0;       
      }
