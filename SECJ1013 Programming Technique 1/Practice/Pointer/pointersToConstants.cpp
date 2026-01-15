#include <iostream>
using namespace std;

void displayPayRates(const double *, int);

int main()
{
    const int SIZE = 6;
    const double payRates[SIZE] = {18.55, 17.45, 12.85, 14.97, 10.35, 18.89};

    displayPayRates(payRates, SIZE);

    return 0;
}

void displayPayRates(const double *rates, int size)
{
    for (int count = 0; count < size; count++)
    {
        cout << "Pay rate for employee " << (count + 1) << " is $" << *(rates + count) << endl;
    }
}
