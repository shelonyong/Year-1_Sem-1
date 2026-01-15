#include <iostream>
using namespace std;

int main() {
    int num = 50;

    // TODO 1: Print the value of num
    cout << num << endl;
    // TODO 2: Print the address of num
    cout << &num << endl;
    // TODO 3: Declare a pointer ptr and store the address of num
    int *ptr = &num;
    // TODO 4: Print the value stored in ptr (address)
    cout << ptr << endl;
    // TODO 5: Print the value pointed to by ptr
    cout << *ptr << endl;
    // TODO 6: Change num to 100 using ptr
    *ptr = 100;
    // TODO 7: Print num
    cout << num << endl;

    int arr[4] = {10, 20, 30, 40};
    int *p = arr;

    // TODO 8: Print first element using *p
    cout << *p << endl;
    // TODO 9: Print third element using pointer arithmetic
    cout << *(p + 2) << endl;
    // TODO 10: Print fourth element using pointer as array
    cout << p[3] << endl;

    // TODO 11: Use a loop and pointer arithmetic to print all array values
    for (int i = 0; i < 4; i++)
        cout << *(p + i) << " ";
    // Restriction: Do NOT use arr[i]

    int a = 5, b = 5;
    int *p1 = &a;
    int *p2 = &b;

    // TODO 12: Compare pointer addresses
    if (p1 == p2)
        cout << "\nPointers are equal" << endl;
    else 
        cout << "\nPointers are not equal" << endl;

    // TODO 13: Compare values pointed to
    if (*p1 == *p2)
        cout << "Values are equal" << endl;
    else 
        cout << "Values are not equal" << endl;

    return 0;
}



