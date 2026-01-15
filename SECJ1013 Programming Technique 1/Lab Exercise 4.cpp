//Name: YONG SEE EN
//Matrics Number: A25CS0168
//Date: 9/1/2026

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

void readFile(string, double [], int&);
void computeC(double [], double [], int);
double average(double [], int);
char grade(double);
void writeFile(double [], double [], int);

int main()
{
    const int SIZE = 100;
    double F[SIZE], C[SIZE];
    int num = 0, high = 0, medium = 0, low = 0;

    readFile("input.txt", F, num);

    computeC(F, C, num);

    for (int i = 0; i < num; i++)
    {
        if (grade(C[i]) == 'H')
            high++;
        else if (grade(C[i]) == 'M')
            medium++;
        else 
            low++;
    }

    cout << fixed << setprecision(1);
    cout << "Average of high temperature in Celcius: " << average(C, num) << endl;
    cout << "Number of high temperature: " << high << endl;
    cout << "Number of medium temperature: " << medium << endl;
    cout << "Number of low temperature: " << low << endl;

    writeFile(F, C, num);

    return 0;
}

void readFile(string fileName, double F[], int &n)
{
    ifstream inFile;
    inFile.open(fileName);
    n = 0;
    while (inFile >> F[n])
    {
        n++;
    }
    inFile.close();
}

void computeC(double F[], double C[], int n)
{
    for (int i = 0; i < n; i++)
    {
        C[i] = (5.0 / 9.0) * (F[i] - 32);
    }

}

double average (double C[], int n)
{
    double sum = 0;

    for (int j = 0; j < n; j++)
    {
        sum += C[j];
    }
    return sum / n;
}

char grade(double C)
{
    if (C >= 35)
        return 'H';
    else if (C >= 20)
        return 'M';
    else 
        return 'L';
}

void writeFile(double F[], double C[], int n)
{
    ofstream outFile;
    outFile.open("output.txt");

    outFile << left << setw(12) << "C(Celcius)" << setw(16) << "F(Farenheit)" << setw(16) << "Description" << endl;
    outFile << left << setw(12) << "==========" << setw(16) << "============" << setw(16) << "===========" << endl;
    
    for (int k = 0; k < n; k++)
    {
        outFile << fixed << setprecision(2) << "   "
                << left << setw(11) << C[k]  
                << right << setw(6) << F[k]
                << setw(13) << grade(C[k]) << endl;
    }

    outFile.close();
}

