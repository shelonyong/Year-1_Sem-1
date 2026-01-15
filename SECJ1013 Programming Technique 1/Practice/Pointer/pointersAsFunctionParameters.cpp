#include <iostream>
using namespace std;

void increaseByTen(int *);
void getNumber(int *);

int main()
{
    int num;

    getNumber(&num);
    cout << "Before the function call: " << num << endl;
    increaseByTen(&num);
    cout << "After the function call: " << num << endl;

    return 0;
}

void getNumber(int *ptr)
{
    cout << "Enter a number: ";
    cin >> *ptr;
}

void increaseByTen(int *ptr)
{
    *ptr += 10;
}

