#include <iostream>
using namespace std;

/*int main() 
{
    const int SIZE = 5;
    
    int tests[SIZE];
    tests[0] = 79;
    cout << tests[0];
    cin >> tests[1];
    tests[4] = tests[0] + tests[1];

    int i = 0;
    cout << tests[i];
    

    return 0;
}*/

int main()
{
    const int ARRAY_SIZE = 5;
    int numbers[ARRAY_SIZE];

    for (int count = 0; count < ARRAY_SIZE; count++)
        numbers[count] = 99;

    for (int count = 0; count < ARRAY_SIZE; count++)
        cout << "Element " << count << ": " << numbers[count] << endl;

    return 0;
}