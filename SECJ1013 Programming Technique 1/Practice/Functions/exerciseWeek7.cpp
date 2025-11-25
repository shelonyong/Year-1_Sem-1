#include <iostream>
using namespace std;

int calcSum(int x, int y)
{
    int sum;
    sum = x + y;
    return sum;
}

int calcDiff(int x, int y)
{
    int difference;
    difference = x - y;
    return difference;
}

void displayResults(int sum, int diff) 
{
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
}

int main() 
{
    int num1, num2;

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    int sum = calcSum(num1, num2);
    int diff = calcDiff(num1, num2);

    displayResults(sum, diff);

    return 0;
}