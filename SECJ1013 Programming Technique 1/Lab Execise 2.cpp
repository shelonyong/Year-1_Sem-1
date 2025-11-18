//Name: YONG SEE EN
//Matrics Number: A25CS0168
//Date: 11/11/2025
//Set Number: 2
#include <iostream>
using namespace std;

int main() {
    
    int num, sum = 0, digit;

    cout << "Enter an integer number: ";
    cin >> num;

    //Calculate the sum of digits
    while (num > 0)
    {
        digit = num % 10;  //Get last digit
        sum += digit;      //Add digit to sum
        num = num / 10;    //Remove the last digit

        cout << digit;
        if (num > 0)
            cout << " + ";
    }

    cout << " = " << sum << endl;

    //Check the sum of digits is even or odd number
    if (sum % 2 == 0)
        cout << sum << " is even number";
    else
        cout << sum << " is odd number";
    
    //Check the sum of digits is multiple of 4 or 5
    if ((sum % 4 == 0) && (sum % 5 == 0))
        cout << " & multiples of 4 and 5" << endl;
    else if (sum % 4 == 0)
        cout << " & multiples of 4" << endl;
    else if (sum % 5 == 0)
        cout << " & multiples of 5" << endl;
    
    return 0;
}