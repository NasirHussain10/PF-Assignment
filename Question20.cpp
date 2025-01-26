#include <iostream>
#include <cmath>
using namespace std;

double UDF_2(double value) {
    return sqrt(value);
}

double UDF_3(double a, double b, double c) {
    return a + b + c;
}

void UDF_1(double a, double b, double c) {
    double sqrt_a = UDF_2(a);
    double sqrt_b = UDF_2(b);
    double sqrt_c = UDF_2(c);

    double sum_of_squares = UDF_3(sqrt_a, sqrt_b, sqrt_c);

    double product_of_squares = sqrt_a * sqrt_b * sqrt_c;
    cout << "Sum of square roots: " << sum_of_squares << endl;
    cout << "Product of square roots: " << product_of_squares << endl;
}

int main() {
    double a, b, c;
    cout << "Enter three numbers (a, b, c): ";
    cin >> a >> b >> c;

    UDF_1(a, b, c);
    return 0;
}

