#include<iostream>
#include<cmath>
using namespace std;
void Solve(int n){ 
    cout<<"Table of "<<n<<endl;
    for(int i = 1; i <= 10; ++i){
        cout<<n<<" x "<<i<<" = "<<n * i<<endl;
    }
}
void Solve(float a, float b, float c){
    float sum_squares = pow(a, 2) + pow(b, 2) + pow(c, 2);
    cout<<"Sum of squares: "<<sum_squares<<endl;
}
float Solve(int a, int b, int c, int d){
    return (float)(a + b + c + d) / 4.0; 
}
template <typename T>
T Solve(T a, T b, T c){
    return pow(a, 2) + pow(b, 2) + pow(c, 2);
}
int main(){
    Solve(5);
    Solve(2.5f, 3.1f, 1.8f);
    float avg = Solve(10, 20, 30, 40);
    cout<<"Average: "<<avg<<endl;
    int int_sum_squares = Solve<int>(2, 3, 4); 
    cout<<"Sum of squares (int): "<<int_sum_squares<<endl;
    float float_sum_squares = Solve<float>(2.5, 3.1, 1.8); 
    cout<<"Sum of squares (float): "<<float_sum_squares<<endl;
    return 0;
}

