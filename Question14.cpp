#include<iostream>
#include<cstring>
using namespace std;
void reverseString(char str[]){
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++){
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}
bool areStringsEqual(const char* str1, const char* str2){
    while (*str1 && *str2){
        if(*str1 != *str2){
            return false;
        }
        str1++;
        str2++;
    }
    return *str1 == *str2;
}
int main(){
    char str1[] = "hello";
    char str2[100];
    cout<<"Enter a string: ";
    cin.getline(str2, 100); 
    reverseString(str1);
    reverseString(str2);
    cout<<"Reversed str1: "<<str1<<endl;
    cout<<"Reversed str2: "<<str2<<endl;
    if(areStringsEqual(str1, str2)){
        cout<<"The strings are similar after reversing."<<endl;
    } else{
        cout<<"The strings are not similar after reversing."<<endl;
    }
    return 0;
}

