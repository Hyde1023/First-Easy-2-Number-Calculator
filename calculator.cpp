#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    cout << "Calculator App" << endl;
    double num1, num2, prod, div, sum, diff;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << "Enter number 2: ";
    cin >> num2;
    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    div = num1 / num2;
    cout << "Sum: " << fixed << setprecision(2) << sum << endl;
    cout << "Difference: " << fixed << setprecision(2) << diff << endl;
    cout << "Product: " << fixed << setprecision(2) << prod << endl;
    cout << "Division: " << fixed << setprecision(2) << div;
    return 0;
}
