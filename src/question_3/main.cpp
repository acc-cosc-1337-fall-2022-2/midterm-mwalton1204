#include "question3.h"

int main()
{
    int num1;
    int num2;
    int gcd;
    auto repeat = 'y';

    while(repeat == 'y' || repeat == 'Y') {
        cout << "Enter an integer between 1-200:";
        cin >> num1;
        cout << "\nEnter another integer between 1-200:";
        cin >> num2;

        if (num1 >= 1 && num1 <= 200 && num2 >= 1 && num2 <= 200)
        {
            gcd = find_gcd(num1, num2);
            cout << "\nGCD: " << gcd;
            cout << "\nWould you like to try again? (y/n)";
            cin >> repeat;
        }
        else
        {
            cout << "Invalid entry, try again.\n";
        }
    }

    return 0;
}