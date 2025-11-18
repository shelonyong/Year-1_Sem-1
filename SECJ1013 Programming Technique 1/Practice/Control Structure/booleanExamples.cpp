#include <iostream>
using namespace std;

int main() {
    
    bool b = false; // b initially is false
    cout << boolalpha;
    cout << b << endl;
    int number = 0;
    b = -10;       // Now, b is true
    cout << b << endl;
    b = number;    // Here, b is false again
    cout << b << endl;

    cout << "------------------" << endl;

    //bool b
    int p;
    int q = 5;

    b = q; //5 become true
    p = b; //true become 1
    cout << "The value of p is " << p << endl;

    cout << "------------------" << endl;

    int a = 10;

    cout << a << endl;

    cout << (a == 1) << endl;

    cout << (a > 1) << endl;

    cout << (a = 5) << endl;

    a = (a != 5);
    cout << a << endl;

    cout << "------------------" << endl;

    int x = 0;

    if ((0 < x) && (x < 10)) //syntax error
        cout << x;

    cout << "------------------" << endl;

    x =1;
    if (2 < x < 9)
        cout << "First" << x << endl;

    if ((2 < x) && (x < 9))
        cout << "Second" << x << endl;

    cout << "------------------" << endl;

    int n = 0;
    
    if (n)
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;

    cout << "------------------" << endl;

    int z = 0;

    if (z = 0)
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;

        cout << "------------------" << endl;

    x = 1;
    if (x < 3)
        cout << "Yes" << endl;
    else 
        cout << "No" << endl;

    (x < 3) ? cout << "Yes" << endl : cout << "No" << endl;

    cout << (x < 3 ? "Yes" : "No") << endl;

    //If x = 1 output Yes, If x = 2 output No, else output Other

    switch (x + 1)
    {
        case 1: 
        cout << "Yes" << endl;
        break;

        case 2:
        cout << "No" << endl;
        break;

        default:
        cout << "Other" << endl;
        break;
    }

    cout << "------------------" << endl;

    #define DEFINE 1
    const int const2 = 2;
    int var3 = 3;
    int value;

    switch (value)
    {
        case 0:
        cout << "Four";
        break;

        case DEFINE:
        cout << "One";
        break;

        case const2:
        cout << "Two";
        break;

        case 3:
        cout << "Three";
        break;

    }

    cout << "------------------" << endl;

    for (n = 10; n > 0; n = n - 1)
    {
        cout << n << " ";
    }

    cout << "\n------------------" << endl;

    for (n = 10; n > 0; n = n - 1)
    {
        if (n < 8) 
            break;
        cout << n << " ";
    }

    cout << "\n------------------" << endl;

    for (n = 10; n > 0; n = n - 1)
    {
        if (n % 2 == 1) 
            continue;
        cout << n << " ";
    }



    return 0;
}