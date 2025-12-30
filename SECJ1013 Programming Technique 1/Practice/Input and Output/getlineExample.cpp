#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 20;
    char firstName[SIZE];
    cout << "Enter your name: ";
    cin.getline (firstName, SIZE);
    cout << firstName << endl;

    return 0;
}