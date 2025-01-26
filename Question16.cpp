#include<iostream>
#include<cmath>
using namespace std;
bool isArmstrongNumber(int num){
    int originalNum = num;
    int n = 0;
    int temp = num;
    while(temp != 0){
        temp /= 10;
        n++;
    }
    int sum = 0;
    temp = num;
    while(temp != 0){
        int digit = temp % 10;
        sum += pow(digit, n);
        temp /= 10;
    }
    return (sum == originalNum);
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(isArmstrongNumber(num)){
        cout<<num<<" is an Armstrong number."<<endl;
    } else{
        cout<<num<<" is not an Armstrong number."<<endl;
    }
    return 0;
}

