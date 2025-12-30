#include <iostream>
using namespace std;

int main()
{
    int id;
    char code;

    cout << "Enter an integer id: ";
    cin >> id; //202\n
    cin.ignore();

    cout << "Enter a code: ";
    cin.get(code); //consider the \n above
    cout << "Output\n" << id << "\t" << code;

    return 0;
    }