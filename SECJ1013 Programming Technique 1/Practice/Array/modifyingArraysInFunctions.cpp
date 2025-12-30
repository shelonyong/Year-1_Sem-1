#include <iostream>
using namespace std;

int average(int [], int);
double average(double [], int);

int main()
{
    int arrayOfInt[] = {1, 2, 3, 4, 5, 6};
    double arrayOfDou[] = {6.0, 4.4, 1.9, 2.9, 3.4, 3.5};
    
    cout << average(arrayOfInt, 6) << endl;
    cout << average(arrayOfDou, 6) << endl;
}

int average(int array[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += array[i];
    }

    return total / size;
}

double average(double array[], int size)
{
    double total = 0.0;
    for (int i = 0; i < size; i++)
    {
        total += array[i];
    }

    return total / size;
}