#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout<<"Enter a string: ";
    getline(cin, str);
    int charCount[256] = {0};
    for(int i = 0; i < str.length(); i++){ 
        char c = str[i]; 
        charCount[c]++;
    }
    cout<<"The count of each character in the string is:\n";
    for(int i=0; i < 256; i++){
        if(charCount[i] > 0){
            cout << static_cast<char>(i) << "\t" << charCount[i] << endl;
        }
    }
    return 0;
}

