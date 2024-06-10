//Summation
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, sum=0, firstDigit, lastDigit,digit;
    cout << "Enter number to find sum of first and last digit = ";
    cin >> n;

    lastDigit = n % 10;

    digit    = (int)log10(n);

    firstDigit = (int) (n / pow(10, digit));

    sum = firstDigit + lastDigit;
    cout << "Sum of first and last digit = " << sum;
    return 0;
}
