#include "question3.h"

bool test_config()
{
    return true;
}

int find_gcd(int num1, int num2)
{
    while(num1 != num2)
    {
        if (num1 < num2)
        {
            num1 = num1+num2;
            num2 = num1-num2;
            num1 = num1-num2;
        }
        if (num1 > num2)
        {
            num1 = num1-num2;
        }

    }

    return num1;
}