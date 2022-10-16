#include "question4.h"

int main()
{
    double c;
    auto repeat = 'y';

    while(repeat == 'y' || repeat == 'Y')
    {
        cout << "Enter a temperature in Celsius:";
        cin >> c;

        cout << "\n" << c
             << " degrees Celsius converted to Fahrenheit is "
             << get_fahrenheit(c) << " degrees.";

        cout<<"\nWould you like to continue? (y/n):";
        cin>>repeat;
    }

    return 0;
}