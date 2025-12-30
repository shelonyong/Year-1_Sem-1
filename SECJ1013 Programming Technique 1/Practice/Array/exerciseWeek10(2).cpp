#include <iostream>
using namespace std;

int main() 
{
    const int MONTHS = 12;
    double rainfall[MONTHS];
    string months[MONTHS] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    double total = 0;
    double average, highest, lowest;
    int highestMonth, lowestMonth;

    for (int i = 0; i < MONTHS; i++)
    {
        double value;
        
        do {
            cout << "Enter the rainfall for " << months[i] << ": ";
            cin >> value;

            if (value < 0)
            {
                cout << "Invalid input! Rainfall cannot be negative. " << endl;
            }
        } while (value < 0);

        rainfall[i] = value;
    }

    for (int j = 0; j < MONTHS; j++)
        total += rainfall[j];

    average = total / MONTHS;

    highest = rainfall[0];
    lowest = rainfall[0];
    highestMonth = 0;
    lowestMonth = 0;

    for (int count = 1; count < MONTHS; count++)
    {
        if (rainfall[count] > highest)
        {
            highest = rainfall[count];
            highestMonth = count;
        }
            
        if (rainfall[count] < lowest)
        {
            lowest = rainfall[count];
            lowestMonth = count;
        }           
    }

    cout << "Total rainfall: " << total << endl;
    cout << "Average monthly rainfall: " << average << endl;
    cout << "Highest rainfall: " << highestMonth << " " << highest << endl;
    cout << "Lowest rainfall: " << lowestMonth << " " << lowest << endl;

    return 0;
}