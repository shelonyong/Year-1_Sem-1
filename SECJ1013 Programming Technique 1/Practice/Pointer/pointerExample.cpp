#include <iostream>
using namespace std;

/*int main()
{
    int a = 1, b, *intptr;

    cout << a << endl;
    cout << &a << endl;

    intptr = &a;
    cout << intptr << endl;
    cout << *intptr << endl; //Actual value
    
    b = *intptr;
    cout << b << endl;

    return 0;
}*/

/*void func(int &a)
{
    a = 1;
}

int main()
{
    int b = 2;
    cout << b << endl;
    func(b);
    cout << b << endl;

    return 0;
}*/

int main()
{
    int array[] = {1, 2, 3, 4};

    cout << array[0] << endl;
    cout << array << endl;
    cout << *array << endl;

    int *ptr = &array[0];
    cout << ptr[0] << endl;

    return 0;
}

