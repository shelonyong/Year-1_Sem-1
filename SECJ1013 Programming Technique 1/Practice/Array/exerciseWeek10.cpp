#include <iostream>
using namespace std;

int main() 
{
    const int SIZE = 10;
    int num[SIZE];
    int largest;
    int smallest;

    cout << "Enter 10 integers: " << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cin >> num[i];
    }

    largest = num[0];
    smallest = num[0];

    for (int count = 1; count < SIZE; count++)
    {
        if (num[count] > largest)
            largest = num[count];
        if (num[count] < smallest)
            smallest = num[count];
    }

    cout << "Largest value: " << largest << endl;
    cout << "Smallest value: " << smallest << endl;
    
    return 0;
}